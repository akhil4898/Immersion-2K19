#include <stdio.h>
#define number 15
int square = number * number;
#undef number
int main()
{
    printf("%d", square);
    return 0;
}