#include<stdio.h>
#include<math.h>


int main(){
    int n, i, j, num = 0;
    printf("Enter a number in Binary to make it in Decimal\n");
    scanf("%d", &n);
    i = n;
    
    for (j = 0; i; j++)
    {
        if (i % 10)
        {
            num += (int)pow(2, j);
        }
        i /= 10;
    }
    printf("%d\n", num);
    return 0;
}
