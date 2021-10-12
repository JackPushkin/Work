#include <stdio.h>
#include <cstdlib>
#include <time.h>

//Поменять местами максимальный и последний отрицательный элементы массива M(40)

int main()
{
    srand(time(nullptr));
    const int size = 5;
    int array[size];


    //Заполняем массив случайными положительными и отрицательными числами

    printf("Array elements: ");
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()%1000-300;
        printf("%d ", array[i]);
    }

    //Находим наибольший и последний отрицательный элементы массива

    int max = 0;
    int count = 0;

    for(int i = 1; i < size; ++i)
    {
        if(array[max] < array[i])
        {
            max = i;
        }
        if(array[i] < 0)
        {
            count = i;
        }
    }

    //Меняем местами максимальный и последний отрицательный элементы массива

    int temp = array[max];
    array[max] = array[count];
    array[count] = temp;

    //Выводим результат

    printf("\n\nArray elements: ");
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
