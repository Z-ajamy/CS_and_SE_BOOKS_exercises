#include<stdio.h>

int main(void){
    int i, direction, count, j;
    char c;
    printf("%s\n", "Which direction of triangle do you want?");
    printf("%s", "1.left up 2.right up 3.left down 4.right down (put the number): ");
    scanf("%d", &direction);
    printf("%s", "What is the symbol of the triangle? ");
    getchar();
    c = getchar();
    printf("%s", "What is the length of the base of the triangle? ");
    scanf("%d", &count);

    switch (direction)
    {
    case 1:
        for (i = 1; i <= count; i++)
        {
            for (j = 1; j <= i; j++)
                printf("%c", c);
            printf("\n");
        }
        break;
    
    case 2:
    for (i = 1; i <= count; i++)
        {
            for (j = 1; j <= count; j++)
            {
                if (j <= (count - i))
                    printf(" ");
                else
                    printf("%c", c);
            }
            printf("\n");
        }
        break;

    case 3:
        for (i = count; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
                printf("%c", c);
            printf("\n");
        }
        break;

    case 4:
        for (i = count; i >= 1; i--)
        {
            for (j = 1; j <= count; j++)
            {
                if (j <= (count - i))
                    printf(" ");
                else
                    printf("%c", c);
            }
            printf("\n");
        }
        break;

    default:
        printf("Not in the options\n");
        break;
    }
    
    return 0;
    
}
