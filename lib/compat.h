/* compat.h - Compatibility stuff */

#ifndef SQUIZZ_COMPAT_H_
#define SQUIZZ_COMPAT_H_

#ifndef PRIu64
# ifdef _LP64
#  define PRIu64 "lu"
# else
#  define PRIu64 "llu"
# endif
#endif /* PRIu64 */

#ifndef PRIu32
# define PRIu32 "u"
#endif /* PRIu32 */

#ifndef PRIsiz
# if   SIZEOF_SIZE_T == 8
#  define PRIsiz PRIu64
# elif SIZEOF_SIZE_T == 4
#  define PRIsiz PRIu32
# else
#  error "Unsupported size_t size"
# endif
#endif /* PRIsiz */

#endif /* SQUIZZ_COMPAT_H_ */
