#include <stdio.h>
#include <cstdlib>

// Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой

int main()
{
    int Row = 7;
    int Col = 7;
    int array[Row][Col];

    // Заполняем матрицу случайными числами
    for(int i = 0; i < Row; ++i)
    {
        for(int j = 0; j < Col; ++j)
        {
            array[i][j] = rand()%10;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Вводим номер строки и столбца, которые хотим поменять местами
    int k;
    printf("\n\nPlease enter k: ");
    scanf("%d", &k);

    // Меняем местами элементы k-ого столбца и k-ой строки
    int temp;
    for(int i = 0; i < Row; ++i)
    {
        temp = array[k][i];
        array[k][i] = array[i][k];
        array[i][k] = temp;
    }

    // Вывод полученной матрица в консоль
    printf("\n\n");
    for(int i = 0; i < Row; ++i)
    {
        for(int j = 0; j < Col; ++j)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
