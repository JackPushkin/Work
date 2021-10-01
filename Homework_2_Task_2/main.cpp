#include <stdio.h>
#include <math.h>

// Сравнение площадей геометрических фигур

int main()
{
    double R;
    double a;
    double d;
    double S_circle;
    double S_triangle;
    double S_Square;
    double Max_S;

    // Вводим геом. хар-ки фигур

    printf("Enter radius of the circle (R): ");
    scanf("%lf", &R);
    printf("Enter side of the triangle (a): ");
    scanf("%lf", &a);
    printf("Enter side of the square (d): ");
    scanf("%lf", &d);

    // Вычисляем площади

    S_circle = M_PI*R*R;
    S_triangle = a*a*sqrt(3)/4;
    S_Square = d*d;

    // Выводим площади на экран

    printf("\nS of the circle is: %f\n", S_circle);
    printf("S of the triangle is: %f\n", S_triangle);
    printf("S of the square is: %f\n", S_Square);

    // Находим макс. площадь

    Max_S = S_circle>S_triangle ? S_circle : S_triangle;
    Max_S = Max_S>S_Square ? Max_S : S_Square;

    // Вывод макс. площади

    printf("\nMax square is: %f", Max_S);

    return 0;
}
