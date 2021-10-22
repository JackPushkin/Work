#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Определить местоположение элементов массива А (30), не встречающихся в массиве В (15)

int main()
{
    srand(time(nullptr));

    // Создаем массивы

    const int SIZE = 30;
    const int SIZE_2 = 15;
    int array[SIZE];
    int array2[SIZE_2];

    for(int i = 0; i < SIZE; ++i) // Заполняем массив случайными числами
    {
        array[i] = rand() % 50;
        array2[i] = rand() % 25;
    }

    for(int i = 0; i < SIZE; ++i) // Вывод первого массива
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    for(int i = 0; i < SIZE_2; ++i) // Вывод второго массива
    {
        printf("%d ", array2[i]);
    }

    printf("\n\n");

    // Находим индексы элементов массива array[], не встречающихся в массиве array2[]. Вывод индексов в консоль

    int j;
    for(int i = 0; i < SIZE; ++i)
    {
        for(j = 0; j < SIZE_2; ++j)
        {
            if(array[i]==array2[j])
            {
                break;
            }
            if(j == SIZE_2 - 1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
