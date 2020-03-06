/* sprot.c - SWISSPROT sequence functions */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <sys/types.h>

#include <ctype.h>
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif
#include <stdio.h>
#include <string.h>

#include "sequence.h"
#include "sequence/protein.h"
#include "sequence/sprot.h"

#include "compat.h"

typedef uint64_t crc_t;

#ifdef _LP64
#define CRC_CONST 0xd800000000000000UL
#define CRC_PRINT "lX"
#else
#define CRC_CONST 0xd800000000000000ULL
#define CRC_PRINT "llX"
#endif


/* Functions prototypes */
extern sequence_t *sproty_parse(FILE *);
extern int sproty_check(FILE *);
static crc_t sprot_crc64(char *);


/* Parse SPROT sequence */
sequence_t *sprot_parse(FILE *f) {
  sequence_t *seq;

  seq = sproty_parse(f);

  return seq; }


/* Check SPROT sequence */
int sprot_check(FILE *f) {
  int i;

  i = sproty_check(f);

  return i; }


/* Print SPROT sequence */
void sprot_print(FILE *f, sequence_t *seq) {
  char *p, *q, **x;
  const char *r, *s;
  double w;
  int max;
  long i, l, sep;
  size_t len;
  crc_t crc;

  if (seq == NULL) { return; }

  /* Inits */
  max = 80 - 5;

  /* Name */
  r = (seq->nam != NULL) ? seq->nam : "UNKNOWN";
  s = "Reviewed;"; len = seq->strlen;
  (void)fprintf(f, "ID   %-23.23s %-15.15s %5"PRIsiz" AA.\n", r, s, len);

  /* Accession */
  /* FIXME: Sort secondary accessions alphabetically ... */
  if (seq->acc != NULL) {
    x = seq->acc; l = 0;
    while (x && *x) {
      switch (l) {
      case 0: s = "AC   "; break;
      case 5: s = ""; break;
      default: s = "; "; break; }
      len = strlen(*x); sep = strlen(s);
      if (l + sep + len + 1 > max) {
        (void)fprintf(f, ";\n"); l = 0; continue; }
      (void)fprintf(f, "%s%s", s, *x);
      l += sep + len; x++; }
    (void)fprintf(f, ";\n"); }

  /* Description */
  p = seq->dsc;
  while (p && *p) {
    while (*p && *p == ' ') { p++; }
    (void)fprintf(f, "DE   ");
    q = p;
    while (*q && q - p < max - 5) { q++; }
    while (/*CONSTCOND*/1) {
      /* Do not split words */
      if (q - p > 0 && *q && *q != ' ' && *q != '-') { q--; continue; }
      /* Do not split specials `--', `->' */
      if (*q == '-' && *(q+1) && *(q+1) == '-') { q--; continue; }
      if (*q == '-' && *(q+1) && *(q+1) == '>') { q--; continue; }
      /* Check for trailing '-', '.' */
      if (*q == '-' && q - p + 1 > max - 5) { q--; continue; }
      if (*q == '\0' && q - p + 1 > max - 5) { q--; continue; }
      /* Do not split Enzyme refs */
      if (*q == '-' && q - p > 1 && *(q-1) == '.') { q--; continue; }
      if ((*q == '\0' || *q == ' ') && q - p > 4 &&
	  strncmp(q-4, " (EC", 4) == 0) { q--; continue; }
      if (*q == '-') { q++; }
      break; }
    if (q == p) {
      /* Handle words longer than max-5 */
      while (*q && !isspace((unsigned char)*q)) q++; }
    while (*p && q - p > 0) {
      (void)fputc(*p, f); p++; }
    (void)fputc('\n', f); }

  /* Keywords */
  if (seq->kwd != NULL) {
    x = seq->kwd; l = 5;
    fprintf(stderr, ">>%s<<\n", *x);
    (void)fprintf(f, "KW   ");
    while (x && *x) {
      switch (l) {
      case 0: s = "KW   "; break;
      case 5: s = ""; break;
      default: s = "; "; break; }
      len = strlen(*x); sep = strlen(s);
      if (l > 5 && l + sep + len + 1 > max) {
	(void)fprintf(f , ";\n");
	l = 0; continue; }
      if (l + sep + len + 1 < max) {
	(void)fprintf(f, "%s%s", s, *x);
	l += sep + len; x++; continue; }
      (void)fprintf(f, "%s", s); l += sep;
      p = *x; i = 0;
      while (p && *p) {
	while (*p && *p == ' ') { p++; }
	q = p;
	while (*q && l + 1 + q - p < max) { q++; }
	while (/*CONSTCOND*/1) {
	  /* Do not split words */
	  while (q - p > 0 && *q && *q != ' ') { q--; continue; }
	  break; }
	i = q - p;
	while (*p && q - p > 0) {
	  (void)fputc(*p, f); p++; }
	if (*p) {
	  (void)fprintf(f, "\nKW   "); }
	len = 5; p = q; }
      l += i;
      if (*(x+1) != NULL) {
	l = 0; (void)fprintf(f, ";\n"); }
      x++; }
    (void)fprintf(f, ".\n"); }

  /* Sequence header */
  len = seq->strlen; w = protein_weight(seq->str) + 0.5;
  crc = sprot_crc64(seq->str);
  (void)fprintf(f, "SQ   SEQUENCE   %"PRIsiz" AA;  %lu MW", len, (unsigned long)w);
  (void)fprintf(f, ";  %016" CRC_PRINT " CRC64;\n", crc);

  /* Sequence */
  p = seq->str; l = 0;
  while (*p) {
    l = p - seq->str;
    if (l % 60 == 0 && l > 0) {
      (void)fputc('\n', f); }
    if (l % 60 == 0) {
      (void)fprintf(f, "     "); }
    if (l % 10 == 0 && l % 60 != 0) {
      (void)fputc(' ', f); }
    if (*p == '*') { p++; continue; }
    (void)fputc(*p, f);
    p++; }
  (void)fputc('\n', f);

  /* End */
  (void)fprintf(f, "//\n");

  return; }


/* Calculate SwissProt CRC64 (x64 + x4 + x3 + x1 + 1) */
static crc_t sprot_crc64(char *str) {
  char *p;
  int i, j;
  crc_t crc, tab[256];

  /* Init table */
  for (i = 0; i < 256; i++) {
    crc_t part = i;
    for (j = 0; j < 8; j++) {
      if (part & 1) {
	part = (part >> 1) ^ CRC_CONST;
	continue; }
      part = part >> 1; }
    tab[i] = part; }

  /* Calculate CRC */
  crc = 0; p = str;
  while (*p) {
    crc_t tmp1, tmp2;
    tmp1 = crc >> 8; tmp2 = (crc ^ *p) & 0xff;
    i = (int)tmp2; crc = tmp1 ^ tab[i];
    p++; }

  return crc; }
