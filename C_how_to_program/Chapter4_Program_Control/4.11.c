#include<stdio.h>
int main(void) {
    int count, i;
    double num, min, max;
    printf("%s", "Enter the number of numbers: ");
    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        scanf("%lf", &num);
        if (num < min)
            min = num;
        if (num > max)
            max = num;        
    }
    printf("%s %.2f %s %.2f\n", "the min is:", min, "the max is:", max);
    
    return 0;
}
