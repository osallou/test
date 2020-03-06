/* gcg.h - GCG sequence functions */

#ifndef SQUIZZ_SEQUENCE_GCG_H_
#define SQUIZZ_SEQUENCE_GCG_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *gcg_parse(FILE *);
int gcg_check(FILE *);
void gcg_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_GCG_H_ */

