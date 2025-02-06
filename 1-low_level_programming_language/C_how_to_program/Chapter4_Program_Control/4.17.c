#include<stdio.h>

int main(void){
    int account_num, i;
    double creditLimitBefore, currentBalance, newCreditLimit;

    for (i = 1; i <= 3; i++)
    {
        printf("%s %d\n", "Enter the account number for castomer", i);
        scanf("%d" ,&account_num);

        printf("%s %d\n", "Enter the credit Limit Before recession for number for castomer", i);
        scanf("%lf" ,&creditLimitBefore);

        printf("%s %d\n", "Enter the current Balance for number for castomer", i);
        scanf("%lf" ,&currentBalance);


        newCreditLimit = creditLimitBefore / 2.0;
        printf("\nCustomer %d:\n", i);
        printf("Account Number: %d\n", account_num);
        printf("Old Credit Limit: %.2f\n", creditLimitBefore);
        printf("New Credit Limit: %.2f\n", newCreditLimit);

        if (newCreditLimit < currentBalance)
        {
            printf("Status: Exceeded Credit Limit\n");
        }
        else
        {
            printf("Status: Within Credit Limit\n");
        }
        printf("---------------------\n\n");

    }
    return 0;
}
