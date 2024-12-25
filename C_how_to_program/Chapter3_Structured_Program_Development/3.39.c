#include<stdio.h>

int main(){
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (j == 0 || !(j % 2))
            {
                printf("#");
            }
            else
            {
                printf("@");
            }
        }
        
        printf("\n");
    }
    return 0;
}
