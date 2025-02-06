#include<stdio.h>
int main(){
    int i, sumEven = 0, sumOdd = 0;
    for (i = 2; i <= 30; i++)
    {
        if (!(i % 2))
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }
    printf("%s%d\n%s%d\n", "the sum oe even fron 2 to 30 is: ", sumEven, "the sum oe odd fron 2 to 30 is: ", sumOdd);
    return 0;   
}
