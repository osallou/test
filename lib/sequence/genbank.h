/* genbank.h - GENBANK sequence functions */

#ifndef SQUIZZ_SEQUENCE_GENBANK_H_
#define SQUIZZ_SEQUENCE_GENBANK_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *genbank_parse(FILE *);
int genbank_check(FILE *);
void genbank_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_GENBANK_H_ */

