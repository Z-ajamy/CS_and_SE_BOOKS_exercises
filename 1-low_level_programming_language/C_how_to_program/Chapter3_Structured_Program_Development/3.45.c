#include<stdio.h>

int main(){
    int n, i, res = 1;
    printf("%s", "Enter a positive number to get its factorial\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("not a positive");
        return 0;
    }
    
    i = n;
    while (i)
    {
        res *= i;
        i -= 1;
    }
    printf("%d\n", res);
    return 0;
}
