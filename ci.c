#include<stdio.h>
#include<math.h>
void main()
{
    double p = 0.0;
    double r = 0.0;
    double n = 0.0;
    int t = 0;
    double compound_interest = 0;
    
    printf("Compound Interest Calculator\n");

    printf("Enter the principal amount: ");
    scanf("%lf", &p);

    printf("Enter the rate of interest: ");
    scanf("%lf", &r);

    printf("Enter the number of time the interest is compounded: ");
    scanf("%lf", &n);

    printf("Enter the number of year(s): ");
    scanf("%d",&t);

    compound_interest = p * (1 + ((r/100)/n)) * pow(n,1) * pow(t,1);

    printf("The coumpound interest will be %lf after %d year(s) ", compound_interest,t);

}
