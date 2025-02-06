# include<stdio.h>

int main(void) {
    int caunt = 0;
    double num, av, sum = 0;
    printf("%s\n", "Enter numbers to get average, the sentinel is 9999");
    while (1)
    {
        scanf("%lf", &num);
        if (num == 9999)
        {
            break;
        }
        caunt++;
        sum += num;
    }
    av = sum / caunt;
    printf("%s %.2f\n", "the average is:", av);
    return 0;
    
}
