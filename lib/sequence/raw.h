/* raw.h - RAW sequence functions */

#ifndef SQUIZZ_SEQUENCE_RAW_H_
#define SQUIZZ_SEQUENCE_RAW_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *raw_parse(FILE *);
int raw_check(FILE *);
void raw_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_RAW_H_ */

