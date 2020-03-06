/* sprot.h - SWISSPROT sequence functions */

#ifndef SQUIZZ_SEQUENCE_SPROT_H_
#define SQUIZZ_SEQUENCE_SPROT_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *sprot_parse(FILE *);
int sprot_check(FILE *);
void sprot_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_SPROT_H_ */

