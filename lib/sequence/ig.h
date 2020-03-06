/* ig.h - IG sequence functions */

#ifndef SQUIZZ_SEQUENCE_IG_H_
#define SQUIZZ_SEQUENCE_IG_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *ig_parse(FILE *);
int ig_check(FILE *);
void ig_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_IG_H_ */

