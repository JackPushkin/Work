#include <stdio.h>
#include <math.h>

// Вычислить сумму ряда с точностью 10^-5, где 0.05<x<1

int main()
{
    double x;

    printf("Please enter x(0.05, 1): ");
    scanf("%lf", &x);

    double sum = x;
    const double acuracy = 10e-5;

    for(int i = 1; ; ++i)
    {
        double fact_chisl = 1;
        double fact_znam = 1;

        for(int j = 1; j <= (2 * i - 1); j += 2)
        {
            fact_chisl *= j;
        }

        for(int j = 2; j <= 2 * i; j += 2)
        {
            fact_znam *= j;
        }

        double step = (fact_chisl * pow(x, (2 * i + 1)))/(fact_znam * (2 * i + 1));

        if(step > acuracy)
        {
            sum += step;
        }
        else break;
    }

    printf("Sum is %lf", sum);

    return 0;
}
