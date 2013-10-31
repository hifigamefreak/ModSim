/* Practicum Modelleren Simuleren
 * Joost Hekman (5887232)
 *
 * Assignment 1, part 2: 
 * Investigate the behaviour of your computer for invalid operations
 */
#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, char *argv[]) {
   
   /* Generate Inf */	
   printf("1.0 / 0.0 = %f\n", 1.0 / 0.0);
   printf("-1.0 / 0.0 = %f\n", -1.0 / 0.0);
   printf("log(0) = %f\n", log(0));
   printf("sqrt(-1) = %f\n", sqrt(-1));
	
   /* Generate NaN */
   printf("0.0 / 0.0 = %f\n", 0.0 / 0.0);
   printf("Inf / Inf = %f\n", INFINITY / INFINITY);
   printf("sin(2)^-1 = %f\n", asin(2));
   printf("cos(-2)^-1 = %f\n", acos(-2));
 
   /* Generate singed zero */
   printf("1.0 / -Inf = %f\n", 1.0 / -INFINITY);
   printf("1.0 / Inf = %f\n", 1.0 / INFINITY);
}
