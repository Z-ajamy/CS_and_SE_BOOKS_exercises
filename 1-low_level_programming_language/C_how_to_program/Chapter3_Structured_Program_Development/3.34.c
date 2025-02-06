#include<stdio.h>
#include<math.h>

int main(){

    int n, length, i;
    printf("%s", "Enter a number biger than 9 to Palindrome Tester\n");
    scanf("%d", &n);
    i = n;
    length = 0;

    if (n <= 9)
    {
        printf("%d %s", n, "is not biger than 9\n");
        return 0;
    }

    while(i){
        i /= 10;
        length++;
    }

    if (length == 1)
    {
        printf("%d %s", n, "is not biger than 9\n");
        return 0;
    }
    
    for (i = 0; i < (length) / 2; i++)
    {
        if ((n % (int)pow(10, (i + 1))) / (int)pow(10, i) != (n % (int)pow(10, (length - i))) / (int)pow(10, (length - (i + 1))))
        {
            printf("Not Palindrome\n");
            return 0;
        } 
    }

    printf("Is Palindrome\n");
    return 0;
}
