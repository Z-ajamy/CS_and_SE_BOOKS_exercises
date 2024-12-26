#include<stdio.h>
#include<math.h>

int main(){
    short int num, l = 0, res = 0, i, j;
    printf("%s", "Enter the 4-digit code to be decrypted\n");
    scanf("%hd", &num);

    j = num;
    while (j)
    {
        j /= 10;
        l++;
        if (j % 10 == 7)
        {
            printf("%s\n", "It could not have been encrypted by us.");
            return 0;
        }
    }

    if (l != 4)
    {
        printf("The input is invalid: it must be a 4-digit number.\n");
        return 0;
    }


    for (i = 0; i < 4; i++)
    {
        j = num % (int)pow(10, (i + 1));
        j /= pow(10, i);

        if (j - 7 > 0)
            j -= 7;
        else
            j += 3;

        if (i == 0)
            res += j * 100;
        else if (i == 1)
            res += j * 1000;
        else if (i == 2)
            res += j;
        else
            res += j * 10;
    }
    printf("%s %hd\n", "the original code is", res);
    return 0;
    
}
