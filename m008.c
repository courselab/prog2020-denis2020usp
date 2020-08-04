/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  char t;
  int i;
  int x;
  int k;
  int y;
  char s2;
  int n;
  strcpy (t , s);
  n = strlen (t);
  for (i=0 ; i<=n ; i++)
  {
     if (t[i] == espaço)
      {
         x = i;
      }
  }
  for (k=x ; k<=n ; k++)
    {
    s = t;
    }
  for (y=0 ; y<=x ; y++)
    {
    s2 = t;
    }

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
