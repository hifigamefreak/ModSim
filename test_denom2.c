#include <stdio.h>
#include <string.h>

int main(void) {
    int i = 0x00300000;
    float f = 0;
    if (sizeof(f) != sizeof(i)) {
        printf ("Urk!\n");
        return 1;
    }
    memcpy (&f, &i, sizeof(f));
    printf ("%.50f\n", f);
    if (f == f)
        puts ("Equal");
    else
        puts ("Not equal");
    return 0;
}
