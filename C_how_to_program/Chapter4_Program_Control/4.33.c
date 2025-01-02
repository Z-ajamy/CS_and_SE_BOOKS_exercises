#include<stdio.h>

int main(){
    int x;
    printf("Enter a number between 1 to 1000 Roman Numerals\n");
    scanf("%d", &x);
    while (1)
    {
        if (x < 1 || x > 1000)
        {
            printf("not between 1 to 1000, pleas Enter a number between 1 to 1000 Roman Numerals\n");
            scanf("%d", &x);
            continue;
        }
        break;
    }
    
    while (x > 0)
    {
        if (x >= 1000)
        {
            printf("M");
            x -= 1000;
        }
        if (x >= 500)
        {
            printf("D");
            x -= 500;
        }
        if (x >= 100)
        {
            printf("C");
            x -= 100;
        }
        if (x >= 90)
        {
            printf("XC");
            x -= 90;
        }
        if (x >= 50)
        {
            printf("L");
            x -= 50;
        }
        if (x >= 40)
        {
            printf("XL");
            x -= 40;
        }
        if (x >= 10)
        {
            printf("X");
            x -= 10;
        }
        if (x >= 9)
        {
            printf("IX");
            x -= 9;
        }
        if (x >= 5)
        {
            printf("V");
            x -= 5;
        }
        if (x >= 4)
        {
            printf("IV");
            x -= 4;
        }
        if (x >= 1)
        {
            printf("I");
            x -= 1;
        }
    }
    printf("\n");
    return 0;

}
