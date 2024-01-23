#include <stdio.h>
#include <stdint.h>

/*
    |Total income      | % of tax   |
    |Up to $9,525      | 0          |
    |$9,526 to $38,700 | 12%        |
    |$38,701 to %82,500| 22%        |
    |>$82,500          | 32% + $1000|

    Tax payable = Income*(tax rate/100)

*/
int main (void)
{
    int Income = 0;
    double tax_rate = 0.0;

    printf("Enter your income: ");
    if(scanf("%d", &Income) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    if(Income <= 9525)
    {
        tax_rate = 0;
    }
    else if ((Income>=9526) && (Income<=38700))
    {
        tax_rate = Income*0.12;
    }
    else if ((Income>= 38701) && (Income<=82500))
    {
        tax_rate = Income*0.22;
    }
    else if (Income>82500)
    {
        tax_rate = Income*0.32 + 1000;
    }

    printf("Tax Payable: %.2lf \n",tax_rate);

    return 0;
}