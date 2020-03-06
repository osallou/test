/* nbrf.h - NBRF sequence functions */

#ifndef SQUIZZ_SEQUENCE_NBRF_H_
#define SQUIZZ_SEQUENCE_NBRF_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *nbrf_parse(FILE *);
int nbrf_check(FILE *);
void nbrf_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_NBRF_H_ */

