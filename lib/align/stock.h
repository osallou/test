/* stock.h - STOCKHOLM alignment functions */

#ifndef SQUIZZ_ALIGN_STOCK_H_
#define SQUIZZ_ALIGN_STOCK_H_

#include <stdio.h>

#include "align.h"


/* Functions prototypes */
int stock_check(FILE *);
align_t *stock_parse(FILE *);
void stock_print(FILE *, align_t *);

#endif /* SQUIZZ_ALIGN_STOCK_H_ */
