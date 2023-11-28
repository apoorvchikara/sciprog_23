#include <stdio.h>
#include <math.h>

int main(void) {

/* Initialise variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Int 4-byte integer */
   inum = 33554431;
/* Converting integer to 4-byte float */
   fnum = (float) inum;


/* Converting to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
   numdigits = ceil(logf(inum)/logf(2));
   printf("The number of digits is %d\n",numdigits);


   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);
   return 0;
}
