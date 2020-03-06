/* phylips.h - PHYLIPS alignment functions */

#ifndef SQUIZZ_ALIGN_PHYLIPS_H_
#define SQUIZZ_ALIGN_PHYLIPS_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */

int phylips_check(FILE *);
align_t *phylips_parse(FILE *);
void phylips_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_PHYLIPS_H_ */
