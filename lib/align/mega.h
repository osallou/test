/* mega.h - MEGA alignment functions */

#ifndef SQUIZZ_ALIGN_MEGA_H_
#define SQUIZZ_ALIGN_MEGA_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */
int mega_check(FILE *);
align_t *mega_parse(FILE *);
void mega_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_MEGA_H_ */
