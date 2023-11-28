#include <stdio.h>


int main(void) {
/* Initialise variables */
   int i;
   float sum1, sum2, diff;
   

// Sum1
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1 += 1.0 / i;
   }


// Sum2
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2 += 1.0 / i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2;

   printf(" Difference between the two is %f\n",diff);

   return 0;

}