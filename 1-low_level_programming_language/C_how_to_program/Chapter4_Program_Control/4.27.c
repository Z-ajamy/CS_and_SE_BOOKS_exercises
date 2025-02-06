#include<stdio.h>
#include<math.h>
/**
 * Brute Force xx)
 */
int main(){
    int i, j, k;
    int a, b, c;

    for (i = 1; i <= 500; i++)
    {
        for (j = 1; j <= 500; j++)
        {
            for (k = 1; k <= 500; k++)
            {
                a = (int)pow(i, 2);
                b = (int)pow(j, 2);
                c = (int)pow(k, 2);

                if (a == b + c)
                    printf("Pythagorean Triple: %d, %d, %d\n", i, j, k);
            }
        }
    }
    return 0;
}
