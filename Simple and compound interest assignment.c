// A C program for Simple and compound interest

/* Name: Penuel Barasa Wesonga
Registration Number: Ct100/G/26204
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;
    int n; // number of times interest is compounded per year

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter interest rate (in percent): ");
    scanf("%f", &rate);

    // Simple Interest 
    simple_interest = (principal * time * rate) / 100;
    printf("\nSimple Interest = %.2f\n", simple_interest);

    //Compound Interest
    printf("\nEnter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert rate to decimal for formula
    amount = principal * pow((1 + rate / (100 * n)), n * time);
    compound_interest = amount - principal;

    printf("Compound Interest = %.2f\n", compound_interest);
    printf("Total Amount after Compound Interest = %.2f\n", amount);

    return 0;
}
