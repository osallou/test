/* protein.c - Protein sequence functions */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <ctype.h>

#include "extern/file.h"
#include "sequence/protein.h"

/* Global variables */     /* FIXME: To be loaded from external file ... */
/* ??? X = 118.8860 */

/* Average isotopic masses of amino acids, from
   <URL:http://www.expasy.org/tools/findmod/findmod_masses.html#AA>

   Some guessed values from
   <URL:http://web.expasy.org/compute_pi/>

   X = ???
   B = D or N ... 114.6532
   Z = E or Q ... 128.7473
*/

static double aaw[26] = {
  071.0788, 114.6532, 103.1388, 115.0886, 129.1155, 147.1766, 057.0519, /*A-G*/
  137.1411, 113.1594, 000.0000, 128.1741, 113.1594, 131.1926, 114.1038, /*H-N*/
  237.3018, 097.1167, 128.1307, 156.1875, 087.0782, 101.1051, 150.0388, /*O-U*/
  099.1326, 186.2132, 111.3316, 163.1760, 128.7473 };                   /*V-Z*/


/* Get Molecular Weigth */
double protein_weight(char *seq) {
  char *p;
  double w;
  int i;

  /* Water average mass (H + OH) ... */
  w = 18.0152;

  p = seq;
  while (*p) {
    if (! isalpha((unsigned char)*p)) {
      p++; continue; }
    i = toupper((unsigned char)*p) - 'A';
    w += aaw[i];
    p++; }

  return w; }
