#include <iostream>
using namespace std;

// Вычисляем выражения

int main()
{
    double a = 5;
    double b = 5;
    double c = 5;
    double d;
    a = a + b - 2;
    printf("a=5, b=5, c=5\n");
    printf("a=a+b-2=%.0f\n", a);
    c += 1;
    d = c - a + b;
    printf("c=c+1=%.0f\n", c);
    printf("d=c-a+b=%.0f\n", d);
    a = a * c;
    c -= 1;
    printf("a=a*c=%.0f\n", a);
    printf("c=c-1=%.0f\n", c);
    a = a/10;
    c/=2;
    b-=1;
    d = d*(c + b + a);
    printf("a=a/10=%.1f; c=c/2=%.1f; b=b-1=%.0f; d=d*(c+b+a)=%.1f", a, c, b, d);
    scanf("%f", a);
    return 0;
}
