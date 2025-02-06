#include<stdio.h>
int main(){
    int i, mulEven = 1, mulOdd = 1;
    for (i = 2; i <= 15; i++)
    {
        if (!(i % 2))
        {
            mulEven *= i;
        }
        else
        {
            mulOdd *= i;
        }
    }
    printf("%s%d\n%s%d\n", "the mul oe even fron 2 to 15 is: ", mulEven, "the mul oe odd fron 2 to 15 is: ", mulOdd);
    return 0;   
}
