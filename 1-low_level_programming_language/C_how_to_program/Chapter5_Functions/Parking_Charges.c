/*
 * File: Parking_Charges.c
 * Description: This program calculates and prints parking charges for customers
 *              based on the time their cars were parked in a garage.
 */

 #include <stdio.h>
 #include <math.h>
 
 /* Function prototypes */
 double calculate_charges(double n);
 double get_a_time(short car_num);
 short num_of_cars(void);
 void tell_cost_of_cars(short i, double Parking_time, double cost);
 void tell_total_cost(double total_cost, double total_hours);
 
 /*
  * main - Entry point of the program
  *
  * Description: Collects the number of cars, retrieves parking time,
  *              calculates charges, and prints a summary of parking fees.
  *
  * Return: Always 0 (Success)
  */
 int main(void)
 {
     short num_cars, i;
     double Parking_time, cost, total_hours = 0, total_cost = 0;
 
     /* Get the number of cars */
     num_cars = num_of_cars();
     if (num_cars <= 0)
     {
         printf("NOT available\nEXITING...\n");
         return (0);
     }
     
     /* Process each car */
     for (i = 1; i <= num_cars; i++)
     {
         Parking_time = get_a_time(i);
         if (Parking_time > 24)
         {
             printf("NOT available. Please enter a valid number of hours for this car again.\n");
             i--;
             continue;
         }
         
         cost = calculate_charges(Parking_time);
         tell_cost_of_cars(i, Parking_time, cost);
         total_hours += Parking_time;
         total_cost += cost;
     }
     
     /* Print total summary */
     tell_total_cost(total_cost, total_hours);
     return (0);
 }
 
 /*
  * get_a_time - Retrieves parking time from the user.
  *
  * @car_num: The car number for which parking time is required.
  *
  * Return: Rounded parking time in hours.
  */
 double get_a_time(short car_num)
 {
     double Parking_time;
     printf("Enter the parking time (in hours) for car number %d: ", car_num);
     scanf("%lf", &Parking_time);
     return ceil(Parking_time);
 }
 
 /*
  * num_of_cars - Gets the number of cars from the user.
  *
  * Return: The number of cars.
  */
 short num_of_cars(void)
 {
     short num;
     printf("Welcome! Please enter the number of cars: ");
     scanf("%hd", &num);
     return num;
 }
 
 /*
  * tell_cost_of_cars - Prints parking cost details for each car.
  *
  * @i: Car number
  * @Parking_time: Time the car was parked
  * @cost: Calculated parking charge
  */
 void tell_cost_of_cars(short i, double Parking_time, double cost)
 {
     printf("%10s %10s %10s\n", "Cars", "Hours", "Charge");
     printf("%10d %10.2f %10.2f\n", i, Parking_time, cost);
 }
 
 /*
  * tell_total_cost - Prints the total cost and total hours for all cars.
  *
  * @total_cost: Sum of all parking fees
  * @total_hours: Sum of all parking hours
  */
 void tell_total_cost(double total_cost, double total_hours)
 {
     printf("     ---------------------------\n");
     printf("%10s %10.2f %10.2f\n", "Total", total_hours, total_cost);
 }
 
 /*
  * calculate_charges - Computes parking charges based on time parked.
  *
  * @n: The number of hours parked
  *
  * Return: The total parking cost
  */
 double calculate_charges(double n)
 {
     if (n <= 3)
         return 2.0;
     else if (n == 24)
         return 10.0;
     return ((n - 3) * 0.5) + 2.00;
 }
