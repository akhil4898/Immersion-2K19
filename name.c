// // Write a program to print your name at the center of the screen.

#include <stdio.h>
#include <string.h>

int main()

{

    char name[30];

    int i, len;

    printf("Enter your name: ");

    scanf("%s", name);

    len = strlen(name);

    for (i = 0; i < (40 - (len / 2)); i++)

        printf("  "); // this is space printing.

    printf("%s \n", name);

    return 0;
}