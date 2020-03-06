/* text.c - Text helper functions */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <err.h>
#include <stdlib.h>
#include <string.h>

#include "extern/text.h"


/* Optimized strdup() version with known string length */
char *xstrdup(const char *str, size_t len) {
  char *nstr; size_t nlen = len + 1;
  if ((nstr = malloc(nlen)) == NULL) return nstr;
  return memcpy(nstr, str, nlen); }


/* Append text to buffer */
char *text_strupd(char *dst, char *src) {
  char *p;
  size_t len;

  if (src == NULL) { return dst; }

  len = strlen(src);
  if (dst != NULL) { len += strlen(dst); }

  p = dst;
  if ((dst = realloc(dst, len+1)) == NULL) {
    err(EXIT_FAILURE, "memory"); }
  if (p == NULL) { *dst = '\0'; }

  if (strcat(dst, src) == NULL) {
    errx(EXIT_FAILURE, "text: append failed"); }

  return dst; }


/* Append text to buffer (+ space separator if needed) */
char *text_strupds(char *dst, char *src) {
  char *p, *q;
  int i;
  size_t len;

  if (src == NULL) { return dst; }
  p = src; while (*p && *p == ' ' && *(p+1) && *(p+1) == ' ') p++;

  i = 0;
  if (dst != NULL) {
    i = 1;
    q = dst; while (*q) { q++; }
    if (q - dst > 0) { q--; }
    if (q == dst || *p == ' ' || *q == ' ' || (*q == '-' && *(q-1) != ' ')) { i = 0; }
  }

  len = i + strlen(p);
  if (dst != NULL) { len += strlen(dst); }

  q = dst;
  if ((dst = realloc(dst, len+1)) == NULL) {
    err(EXIT_FAILURE, "memory"); }
  if (q == NULL) { *dst = '\0'; }

  if (i == 1 && strcat(dst, " ") == NULL) {
    errx(EXIT_FAILURE, "text: append failed"); }
  if (strcat(dst, p) == NULL) {
    errx(EXIT_FAILURE, "text: append failed"); }

  return dst; }


char **text_keyadd(char **dst, char *src) {
  char **x;
  int i;
  size_t len;

  if (src == NULL) { return dst; }

  x = dst; i = 1;
  while (x && *x) { i++; x++; }
  x = dst;

  len = (i+1) * sizeof(*x);
  if ((dst = (char **)realloc(dst, len)) == NULL) {
    err(EXIT_FAILURE, "memory"); }
  i--;

  if (i == 0) { *dst = NULL; }
  x = dst + i;
  *x = *(x+1) = NULL;
  *x = text_strupd(*x, src);

  return dst; }

char **text_keyupd(char **dst, char *src) {
  char **x;

  if (src == NULL) { return dst; }

  x = dst;
  while (x && *x) { x++; }
  x--;

  *x = text_strupds(*x, src);

  return dst; }
