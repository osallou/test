/* text.h - Text helper functions */

#ifndef SQUIZZ_EXTERN_TEXT_H_
#define SQUIZZ_EXTERN_TEXT_H_

#include <stdlib.h>
#include <string.h>

char *xstrdup(const char *, size_t);

/* Functions prototypes */

char *text_strupd(char *, char *);
char *text_strupds(char *, char *);

char **text_keyadd(char **, char *);
char **text_keyupd(char **, char *);

#endif /* SQUIZZ_EXTERN_TEXT_H_ */
