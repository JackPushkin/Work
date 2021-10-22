#include <stdio.h>
#include <math.h>

// Поменять местами цифры старшего и младшего разрядов данного натурального числа (например, из числа 3879 получится 9873).

int main()
{
    int number;

    printf("Please enter number: ");
    scanf("%d", &number);

   int count = 0;
   for(int temp = number; temp >= 1; temp/=10, ++count) {}

   int first_digit;
   int last_digit;
   first_digit = number / pow(10, count - 1);
   last_digit = number % 10;

   int result = 0;
   result = last_digit * pow(10, count - 1) + number % (int)pow(10, count - 1) - last_digit + first_digit;

   printf("%d", result);

    return 0;
}
