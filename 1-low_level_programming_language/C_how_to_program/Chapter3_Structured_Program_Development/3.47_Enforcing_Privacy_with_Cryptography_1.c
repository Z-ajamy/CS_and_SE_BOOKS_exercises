#include<stdio.h>
#include<math.h>

int main(void) {
    short int num, i, j = 0, res = 0;

    printf("%s", "Enter a 4-digit number to encrypt it\n");
    scanf("%hd", &num);

    i = num;

    if (i > 9999 || i <= 999)
    {
        printf("%s", "This is not a 4-digit number\n");
        return 0;
    }
    
    for (j = 0; j < 4; j++)
    {
        i = num % (int)pow(10, (j + 1));
        i /= (int)pow(10, j);
        i = (i + 7) % 10;

        if (j == 0)
            res += i * 100;
        else if (j == 1)
            res += i * 1000;
        else if (j == 2)
            res += i;
        else
            res += i * 10;
    }
    printf("%s %hd\n", "the code is", res);
    return 0;
}
