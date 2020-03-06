/* fasta.h - FASTA sequence functions */

#ifndef SQUIZZ_SEQUENCE_FASTA_H_
#define SQUIZZ_SEQUENCE_FASTA_H_

#include <stdio.h>
#include "sequence.h"


/* Functions prototypes */

sequence_t *fasta_parse(FILE *);
int fasta_check(FILE *);
void fasta_print(FILE *, sequence_t *);

#endif /* SQUIZZ_SEQUENCE_FASTA_H_ */

