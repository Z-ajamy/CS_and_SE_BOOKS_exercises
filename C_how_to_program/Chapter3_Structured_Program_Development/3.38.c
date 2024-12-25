#include<stdio.h>

int main(){
    int n, i, count = 0;
    printf("Enter the number to count 7s\n");
    scanf("%d", &n);
    i = n;
    while (i)
    {
        if (i % 10 == 7)
        {
            count++;
        }
        i /= 10;
    }
    printf("%d\n", count);
    return 0;
}
