#include <stdio.h>
#include <cstdlib>
#include <time.h>

// Вычислить сумму элементов матрицы лежащих слева от побочной диагонали.

int main()
{
    srand(time(nullptr));

    const int Row = 5;
    const int Col = 5;
    int array[Row][Col];

    // Заполняем и выводим массив
    for(int i = 0; i < Row; ++i)
    {
        for(int j = 0; j < Col; ++j)
        {
            array[i][j] = rand()%10;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Ищем сумму элементов лежащих слева от побочной диагонали
    int sum = 0;
    int k = Col - 1;
    for(int i = 0; i < Row-1; ++i, --k)
    {
        for(int j = 0; j < k; ++j)
        {
            sum+=array[i][j];
        }
    }

    // Выводим сумму на экран
    printf("\nSum is: %d", sum);

    return 0;
}
