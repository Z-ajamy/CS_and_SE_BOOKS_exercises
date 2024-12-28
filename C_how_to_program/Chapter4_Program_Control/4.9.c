#include<stdio.h>

int main(void) {
    int count, i, sum = 0;
    printf("%s","Enter how many numbers do you want to enter: ");
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%s %d\n", "the sum of them =", sum);
    return 0;
}
