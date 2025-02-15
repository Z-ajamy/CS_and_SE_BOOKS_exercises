#include "Greatest_Common_Divisor.h"
#include <stdio.h>

int main(){
    int x, y, a;
    if (scanf("%d %d", &x, &y) == 2)
    {
        a = Greatest_Common_Divisor_ITR(x, y);
    }
    printf("GCD(%d, %d) = %d\n", x, y, a);
    return 0;
}
