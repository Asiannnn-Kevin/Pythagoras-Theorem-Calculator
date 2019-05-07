#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void) {

double a, b, c;

printf("\n***Welcome to the Pythagoras Theorem calculator!***\n\n");

printf("Please enter side A\n");
scanf("%lf", &a);

printf("\nPlease enter side B\n");
scanf("%lf", &b);

a = pow(a,2);
b = pow(b,2);
c = a+b;
c = sqrt(c);

printf("\nSide C is %lf", c);

return 0;
}



