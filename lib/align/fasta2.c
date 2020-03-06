/* fasta2.c - FASTA alignment functions */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include "align.h"
#include "align/fasta2.h"
#include "sequence/fasta.h"


/* Functions prototypes */
extern int fastay_check(FILE *);
extern sequence_t *fastay_parse(FILE *);


/* Checks FASTA alignment */
int fasta2_check(FILE *f) {
  int i, nb;

  nb = 0;
  while ((i = fastay_check(f)) == 0) { nb++; }
  if (i == -1 && nb > 1) { i = 0; }

  return i; }


/* Parse FASTA alignment */
align_t *fasta2_parse(FILE *f) {
  int i;
  size_t len;
  align_t *ali;
  sequence_t **s, *seq;

  if ((ali = align_new()) == NULL) {
    return NULL; }

  while ((seq = fastay_parse(f)) != NULL) {
    s = ali->seq; i = (int)(ali->cur - ali->seq);
    len = sizeof(*s) * (i + 1 + 1);
    if ((ali->seq = realloc(ali->seq, len)) == NULL) {
      align_free(ali); return NULL; }
    s = ali->seq + i; *s = seq; *(s+1) = NULL;
    ali->cur = s + 1; }

  return ali; }


/* Print FASTA alignment */
void fasta2_print(FILE *f, align_t *ali) {
  sequence_t **s;

  if (ali == NULL) { return; }

  s = ali->seq;
  while (s && *s) {
    fasta_print(f, *s);
    s++; }

  return; }
