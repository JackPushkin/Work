#include <stdio.h>
#include <math.h>
using namespace std;

// Вычисляем выражение

int main()
{
    double x = 0;
    double chisl;
    double znam;
    double result;

    printf("Please enter x: ");
    scanf("%lf", &x);

    chisl = 2*cos(x-M_PI/6)+sqrt(2);
    znam = 1/(2*log(x))+pow(sin(x*x), 2);
    result = chisl/znam*exp(3*x);

    printf("Result of the expression is: %f", result);

    return 0;
}
