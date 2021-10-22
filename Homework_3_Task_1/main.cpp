#include <stdio.h>

// Дано натуральное число N. Составить программу для определения количества цифр в этом числе.

int main()
{
    long long int N;
    int i;

    printf("Please enter N: ");
    scanf("%lld", &N);

    for(i = 1; N >= 10 ; ++i)
    {
        N/=10;
//        if(N<1)
//        {
//            break;
//        }
    }

    printf("The number N contains %d digits", i);

    return 0;
}
