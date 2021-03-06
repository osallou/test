/* fasta2.h - FASTA alignment functions */

#ifndef SQUIZZ_ALIGN_FASTA2_H_
#define SQUIZZ_ALIGN_FASTA2_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */
int fasta2_check(FILE *);
align_t *fasta2_parse(FILE *);
void fasta2_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_FASTA2_H_ */
