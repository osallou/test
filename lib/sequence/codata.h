/* codata.h - CODATA sequence functions */

#ifndef SQUIZZ_SEQUENCE_CODATA_H_
#define SQUIZZ_SEQUENCE_CODATA_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *codata_parse(FILE *);
int codata_check(FILE *);
void codata_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_CODATA_H_ */

