/* nexusi.h - NEXUSI alignment functions */

#ifndef SQUIZZ_ALIGN_NEXUSI_H_
#define SQUIZZ_ALIGN_NEXUSI_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */
int nexusi_check(FILE *);
align_t *nexusi_parse(FILE *);
void nexusi_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_NEXUSI_H_ */
