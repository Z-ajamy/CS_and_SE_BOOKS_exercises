#include <stdio.h>
#include <math.h>

int main(){
    int i, EY, FY, CY = 2025;
    long int P, CP = 8200000000;
    int dif = 0, d = 0;

    printf("Enter the entry year\n");
    scanf("%d", &EY);
    printf("Enter the finaly year\n");
    scanf("%d", &FY);
    if (EY > FY)
    {
        printf("Error: Entry year must be less than or equal to the final year.\n");
        return 0;
    }

    printf("%-26s %-12s %-20s\n", "Year", "Population", "Yearly Increase");

    for (i = EY; i <= FY; i++)
    {
        P = CP * pow(2.7182818, (0.008 * (i - CY)));
        dif = (i > EY ? P : 0) - dif;

        printf("%s %d %s %ld (%d)\n", "in", i, "the population is", P, dif);

         if (d != (P / CP))
        {
            d = (P / CP);
            printf("%s %d%s\n", "the population is", d , "'s of Current");
        }

        dif = P;
    }
    return 0;
}
