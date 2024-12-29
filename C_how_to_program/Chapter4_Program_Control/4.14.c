#include<stdio.h>

int main(){
    int res = 1, num, i;
    printf("%s", "Enter unmber to get it's factorial: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        res *= i;
    }
    printf("%s %d %s %d\n", "the factorial of", num, "is:", res);
    return 0;
}
