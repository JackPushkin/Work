#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
    int dec{};
    printf("Please enter a number: ");
    scanf("%d", &dec);

    printf("Bin wiew of this number is: ");

    for(int i = 0; i < (int)sizeof(int) * CHAR_BIT; ++i)
    {
        dec & (2'147'483'648 >> i) ? printf("1") : printf("0");
    }

    return 0;
}
