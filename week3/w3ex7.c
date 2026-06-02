#include <stdio.h>

int main() {
    int income,more_reprise,net_income;
    double tax;
    const int expense = 100000;
    const int reprise = 60000;
    
    printf("Enter your income(per year): ");
    scanf("%d",&income);

    printf("Enter your reprise(parents,child etc.): ");
    scanf("%d",&more_reprise);

    net_income = income - (expense+reprise+more_reprise);

    if (net_income < 150000) {
        printf("No taxes");
    }
    if (net_income < 300000 && net_income >= 150000)
    {
        tax = 0.05*net_income;
    }
    if (net_income < 500000 && net_income >=300000)
    {
        tax = 0.1*net_income;
    }
    if (net_income < 750000 && net_income >=500000)
    {
        tax = 0.15*net_income;
    }
    printf("Taxes = %.2lf",tax);
    return 0;
}