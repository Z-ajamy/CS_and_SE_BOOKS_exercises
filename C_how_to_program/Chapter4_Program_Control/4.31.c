#include<stdio.h>

int main(){
    int base, i, j, k;
    printf("%s\n", "Enter the base of Diamond (odd)");
    scanf("%d", &base);
    if (base % 2 == 0)
    {
        printf("%s\n", "not an odd numer");
        return 0;
    }
    base = base / 2 + 1;

    for (i = 1; i <= base; i++)
    {
        for (j = 1; j <= base - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    for (i = base-1; i >= 1; i--)
    {
        for (j = 1; j <= base - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    
    return 0;
    
}
