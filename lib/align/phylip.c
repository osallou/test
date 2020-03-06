/* phylip.c - PHYLIP common alignment functions */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "align.h"
#include "align/phylip.h"


/* Fix sequence name */
char *phylip_fixnam(const char *nam) {
  char *p, *new;

  if (nam == NULL) { return NULL; }

  if ((new = strdup(nam)) == NULL) {
    return NULL; }

  /* Truncate names to 10 characters if needed */
  if (strlen(new) > 10) {
    p = new + 10; *p = '\0'; }

  /* Fix invalid characters */
  p = new;
  while (*p) {
    if (strchr("():;,[]", *p) != NULL) { *p = '_'; }
    p++; }

  return new; }
