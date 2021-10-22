#include <stdio.h>
#include <math.h>

// Найти наименьший общий делитель трех натуральных чисел
// (1 будет считаться наименьшим общим делителем только в том случае, когда других общих делителей у заданных чисел нет).

int main()
{
    unsigned int first_num;
    unsigned int second_num;
    unsigned int third_num;
    int min_num;
    int min_divisor = 1;

    printf("Please enter three numbers: \n");
    scanf("%u%u%u", &first_num, &second_num, &third_num);

    min_num = fmin(first_num, second_num);
    min_num = fmin(min_num, third_num);

    for(int i = min_num; i >= 2 ; --i)
    {
        if((first_num % i == 0) && (second_num % i == 0 ) && (third_num % i == 0))
        {
            min_divisor = i;
        }
    }

    printf("Minimal divisor is %d", min_divisor);

    return 0;
}
