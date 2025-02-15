#include "Greatest_Common_Divisor.h"

int Greatest_Common_Divisor_REC(int x, int y)
{
    if (y == 0)
        return x;
    
    return Greatest_Common_Divisor_REC(y, x % y);
}

int Greatest_Common_Divisor_ITR(int x, int y)
{
    int a = (x > y ? x : y);
    while (y != 0)
    {
        a = y;
        y = x % y;
        x = a;
    }
    return a;
}
