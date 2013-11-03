/* Practicum Modeleren Simuleren 
 * Jan Laan (5756529) & Joost Hekman (5887232)
 *
 * Assignment 1, part 3:
 * Compute a large summation using different methods to see 
 * the effect on precision.
 */
#include <math.h>
#include <stdio.h>

/* Perform a Kahan summation for our simple division.
 * Use N iterations in the summation.
 * Kahan: http://en.wikipedia.org/wiki/Kahan_summation_algorithm
 */
float kahan(int N)
{
   int k;
   float error = 0.0f,
         result = 0.0f,
         new_result = 0.0f,
         addition = 0.0f;
   for(k = 1; k <= N; k++)
   {
      addition = 1.0f/k - error;
      new_result = result + addition;
      error = (new_result - result) - addition;
      result = new_result;
   }
   return result;
}

/* The main function */
int main(void)
{
   int i, j;
   int N = 2 * pow(10, 8);
   float result = 0.0f;
   double result_double = 0.0;

   printf("Starting calculations, this may take a while. "
      "Time to get some coffee!\n");

   /* Perform a forward summation, both for floats and doubles. */
   for(i = 1; i <= N; i++)
   {
      result += 1.0f/i;
      result_double += 1.0/i;
   }
   printf("Calculate sum with forward approach:\n");
   printf("Single precision (float): %f\n", result);
   printf("Double precision (double): %f\n", result_double);
   result = 0.0f;
   result_double = 0.0;

   /* Perform a reverse summation, for floats and doubles. */
   for(j = N; j > 0; j--)
   {
      result += 1.0f/j;
      result_double += 1.0/j;
   }
   printf("Calculate sum with reverse approach:\n");
   printf("Single precision (float): %f\n", result);
   printf("Double precision (double): %f\n", result_double);

   /* Try the Kahan summation */
   result = kahan(N);
   printf("Calculate sum with Kahan summation:\n");
   printf("Single precision (float): %f\n", result);

   return 0;
}
