/* phylipi.h - PHYLIPI alignment functions */

#ifndef SQUIZZ_ALIGN_PHYLIPI_H_
#define SQUIZZ_ALIGN_PHYLIPI_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */

int phylipi_check(FILE *);
align_t *phylipi_parse(FILE *);
void phylipi_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_PHYLIPI_H_ */
