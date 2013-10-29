/* Practicum Modeleren Simuleren 
 * Bas Vlaszaty(5783445) & Joost Hekman (5887232)
 *
 * Assignment 1, part 1:
 * Gather some statistics on floats, doubles and long doubles.
 */
#include <stdio.h>
#include <math.h>
#include <float.h>




float findmaxf() {
   float ppx = 0.0;
   float px = 0.0;
   float x = 1.0;

   double a = 20.0;

   while(px != x) {

      ppx = px;
      px = x;
      x  = x*2;
   }

   while(a < 20000000) {

      px = 0.0;
      x = ppx;
      while(px != x) {
         ppx = px;
         px = x;
         x  = x + (x * (1/a));
      }

      a = a*2;
   }

   return ppx;
}

float findminf() {
   float ppx = 0.0;
   float px = 0.0;
   float x = 1.0;

   double a = 2.0;

   while(px != x) {

      ppx = px;
      px = x;
      x  = x/2;
   }

   while(a < 20000000) {

      x  = x - (x / a);
      if (x != px) {
         px = x;
         ppx = px;
      }
      else {
         a = a*2;
      }
   }
   return ppx;
}

double findmaxd() {
   double ppx = 0.0;
   double px = 0.0;
   double x = 1.0;

   double a = 20.0;

   while(px != x) {

      ppx = px;
      px = x;
      x  = x*2;
   }

   while(a < 20000000) {

      px = 0.0;
      x = ppx;
      while(px != x) {
         ppx = px;
         px = x;
         x  = x + (x * (1/a));
      }

      a = a*2;
   }

   return ppx;
}

double findmind() {
   double ppx = 0.0;
   double px = 0.0;
   double x = 1.0;

   double a = 2.0;

   while(px != x) {

      ppx = px;
      px = x;
      x  = x/2;
   }

   while(a < 20000000) {

      x  = x - (x / a);
      if (x != px) {
         px = x;
         ppx = px;
      }
      else {
         a = a*2;
      }
   }
   return ppx;
}

long double findmaxld() {
   long double ppx = 0.0;
   long double px = 0.0;
   long double x = 1.0;

   double a = 20.0;

   while(px != x) {

      ppx = px;
      px = x;
      x  = x * 2;
   }

   while(a < 2000000000) {

      px = 0.0;
      x = ppx;
      while(px != x) {
         ppx = px;
         px = x;
         x  = x + (x * (1/a));
      }
      a = a*2;
   }

   return ppx;
}

long double findminld() {
   long double ppx = 0.0;
   long double px = 0.0;
   long double x = 1.0;

   double a = 2.0;

   while(px != x) {

      ppx = px;
      px = x;
      x  = x/2;
   }

   while(a < 20000000) {

      x  = x - (x / a);
      if (x != px) {
         px = x;
         ppx = px;
      }
      else {
         a = a*2;
      }
   }
   return ppx;
}

int main(int argc,char *argv[]) {

   /* Calculate long double precision */
   long double mach_eps_ld = 1.0;
   do  { mach_eps_ld /= 2.0; }
   while ((long double)(1.0 + (mach_eps_ld/2.0)) != 1.0);

   printf("Long double: Size = %lu bytes, Precision = %Lg, Range = %Lg to %Lg\n", sizeof(long double), mach_eps_ld, findminld(), findmaxld());

   /* Calculate double precision */
   double mach_eps_d = 1.0;
   do  { mach_eps_d /= 2.0; }
   while ((double)(1.0 + (mach_eps_d/2.0)) != 1.0);

   printf("Double: Size = %lu bytes, Precision = %le, Range = %le to %e\n", sizeof(double), mach_eps_d, findmind(), findmaxd());

   /* Calculate float precision */
   float mach_eps_f = 1.0f;
   do  { mach_eps_f /= 2.0f; }
   while ((float)(1.0 + (mach_eps_f/2.0)) != 1.0);

   printf("Float: Size = %lu bytes, Precision = %le, Range = %le to %e\n", sizeof(float), mach_eps_f, findminf(), findmaxf());

   return 0;
}
