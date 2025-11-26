#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, amount;

    // Input
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100.0;

    amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;

    printf("\nSimple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);
    printf("Amount after Compound Interest: %.2lf\n", amount);

    return 0;
}
