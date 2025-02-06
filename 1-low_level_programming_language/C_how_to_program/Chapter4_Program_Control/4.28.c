#include <stdio.h>

/**
 * Main function to compute each employee's weekly pay.
 * 
 * The program reads the paycode and corresponding employee information
 * until a termination code (-1) is entered.
 * 
 * Each paycode corresponds to a different type of employee:
 *  - 1: Managers
 *  - 2: Hourly workers
 *  - 3: Commission workers
 *  - 4: Pieceworkers
 * 
 * A switch statement is used to handle each paycode separately.
 */
int main() {
    int i, j, num_emplee = 1;      // Employee counter and temporary variables
    int num_week, num_hours, unmer_of_units;   // Input variables
    double salary_per_week, total = 0, salary_per_hour, weekly_sales, salary_per_unit;

    while (1) {
        printf("---\nfor emplee num %d\n---\n", num_emplee++);  // Print employee number
        printf("%s\n", "Enter paycode for state: Managers have paycode 1, hourly workers have code 2, commission workers have code 3 and pieceworkers have code 4. to end -1");
        scanf("%d", &i);  // Read the paycode

        if (i == -1)  // Exit condition
            break;

        switch (i) {
        case 1:
            printf("Enter number of weeks\n");
            scanf("%d", &num_week);  // Read number of weeks
            printf("Enter salary per week\n");
            scanf("%lf", &salary_per_week);  // Read weekly salary
            total = salary_per_week * num_week;  // Calculate total salary
            printf("%s %.2f\n", "the total salaer for the Manager is", total);
            break;

        case 2:
            printf("Enter number of weeks\n");
            scanf("%d", &num_week);  // Read number of weeks
            printf("Enter salary for hour\n");
            scanf("%lf", &salary_per_hour);  // Read hourly salary

            for (j = 1; j <= num_week; j++) {
                printf("Enter number of hours in week number %d\n", j);
                scanf("%d", &num_hours);  // Read hours worked in each week

                if (num_hours > 40) {
                    salary_per_week = 40 * salary_per_hour + (num_hours - 40) * salary_per_hour * 1.5;
                } else {
                    salary_per_week = salary_per_hour * num_hours;
                }

                printf("salary for week %d is %.2f\n", j, salary_per_week);  // Display weekly salary
                total += salary_per_week;  // Accumulate total salary
            }

            printf("%s %.2f\n", "the total salaer for the workers is", total);
            break;

        case 3:
            printf("Enter number of weeks\n");
            scanf("%d", &num_week);  // Read number of weeks
            printf("Enter number of weekly sales\n");
            scanf("%lf", &weekly_sales);  // Read sales for commission calculation
            salary_per_week = 250;  // Base salary for commission workers
            total = (salary_per_week * num_week) + (weekly_sales * 0.057);  // Calculate total salary
            printf("%s %.2f\n", "the total salaer for the commission workers is", total);
            break;

        case 4:
            printf("Enter salary per unit\n");
            scanf("%lf", &salary_per_unit);  // Read salary per unit for pieceworkers
            printf("Enter unmer of units\n");
            scanf("%d", &unmer_of_units);  // Read number of units produced
            total = salary_per_unit * unmer_of_units;  // Calculate total salary
            printf("%s %.2f\n", "the total salaer for the pieceworkers is", total);
            break;

        default:
            printf("not a paycode\n");  // Handle invalid paycode
            continue;  // Skip to the next iteration
        };
    };
    return 0;
}
