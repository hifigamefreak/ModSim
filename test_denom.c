#include <stdio.h>
#include <float.h>
int main()
{
    double minimum = DBL_MIN;
    printf("min = %.17g\n",minimum);

    double maximum = DBL_MAX;
    printf("max = %.17g\n",maximum);

    double inverse_max = 1.0 / maximum;
    printf("1.0/max = %.17g\n",inverse_max);
}
