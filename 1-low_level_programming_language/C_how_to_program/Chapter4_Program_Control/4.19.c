#include <stdio.h>

int main() {
    short product_num, amount, i = 1;
    double price, past, sum = 0;

    while (i <= 7) {
        printf("\n--- Day %d ---\n", i);
        past = sum;

        while (1) {
            printf("Enter the product number (1 to 5), or -1 to end: ");
            scanf("%hd", &product_num);

            if (product_num == -1) {
                break;
            }

            switch (product_num) {
                case 1:
                    price = 2.98;
                    break;
                case 2:
                    price = 4.50;
                    break;
                case 3:
                    price = 9.98;
                    break;
                case 4:
                    price = 4.49;
                    break;
                case 5:
                    price = 6.87;
                    break;
                default:
                    printf("Invalid product number. Please try again.\n");
                    continue;
            }

            printf("Enter the amount of product: ");
            scanf("%hd", &amount);

            if (amount <= 0) {
                printf("Invalid amount. Please enter a positive value.\n");
                continue;
            }

            sum += amount * price;
        }

        printf("Day %d total: %.2f\n", i, sum - past);
        i++;
    }

    printf("\nThe total for the last 7 days is: %.2f\n", sum);
    return 0;
}
