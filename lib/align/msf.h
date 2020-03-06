/* msf.h - MSF alignment functions */

#ifndef SQUIZZ_ALIGN_MSF_H_
#define SQUIZZ_ALIGN_MSF_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */
int msf_check(FILE *);
align_t *msf_parse(FILE *);
void msf_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_MSF_H_ */
