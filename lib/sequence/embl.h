/* embl.h - EMBL sequence functions */

#ifndef SQUIZZ_SEQUENCE_EMBL_H_
#define SQUIZZ_SEQUENCE_EMBL_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *embl_parse(FILE *);
int embl_check(FILE *);
void embl_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_EMBL_H_ */

