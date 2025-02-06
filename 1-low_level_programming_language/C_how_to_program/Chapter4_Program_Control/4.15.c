#include<stdio.h>
#include<math.h>
int main(){
    double initNum, mony;
    int i, j, years;
    printf("%s", "enter your current money: ");
    scanf("%lf", &initNum);
    printf("%s", "enter years: ");
    scanf("%d", &years);

    printf("%s %6s %8s %8s %8s %8s %8s %8s %8s %8s %8s %8s\n",
    "year", "at %0", "at %1", "at %2", "at %3", "at %4", "at %5",
    "at %6", "at %7", "at %8", "at %9", "at %10");
    
    for (i = 1; i <= years; i++)
    {
        printf("%3d: ", i);
        for (j = 0; j <= 10; j++)
        {
            mony = initNum * pow((1 + ((double)j / 100)), i);
            printf("|%5.2f| ", mony);
        }
        printf("\n");
    }
    return 0;
}
