/* clustal.h - CLUSTAL alignment functions */

#ifndef SQUIZZ_ALIGN_CLUSTAL_H_
#define SQUIZZ_ALIGN_CLUSTAL_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */
int clustal_check(FILE *);
align_t *clustal_parse(FILE *);
void clustal_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_CLUSTAL_H_ */
