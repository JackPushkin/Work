#include <stdio.h>

// Найти наименьший общий делитель трех натуральных чисел
// (1 будет считаться наименьшим общим делителем только в том случае, когда других общих делителей у заданных чисел нет).

int main()
{
    int first_num;
    int second_num;
    int third_num;
    int min_num;
    int min_divisor = 1;

    printf("Please enter three numbers: \n");
    scanf("%d%d%d", &first_num, &second_num, &third_num);

    min_num = first_num < second_num ? first_num : second_num;
    min_num = min_num < third_num ? min_num : third_num;

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
