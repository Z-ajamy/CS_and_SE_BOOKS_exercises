#include "Perfect_Numbers.h"
#include <stdio.h>


int main(void)
{
	int i;

    for (i = 0; i <= 100; i++)
    {
        
        if (Perfect_Numbers(i))
            printf("%d is a Perfect number\n", i);
    }

	
    return 0;
}
