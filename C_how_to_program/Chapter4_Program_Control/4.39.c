#include<stdio.h>
/**
 * Limitations of Floating-Point Numbers
 */
int main(){
    float x = 1000000.00;
    x += 0.02f;
    printf("%.2f\n", x);

    return 0;
}
