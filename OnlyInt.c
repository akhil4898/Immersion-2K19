// // Write a program which takes input as integers only that is restrict other characters from input.

#include <ctype.h>
#include <stdio.h>

void clear_stream(FILE *in)
{
    int ch;
    
    clearerr(in);
    
    do
        ch = getc(in);
    while (ch != '\n' && ch != EOF);
    
    clearerr(in);
}

int main(void)
{
    int value, peek;
    
    printf("Enter an integer: ");
    fflush(stdout);
    
    while (scanf("%d", &value) != 1 || 
           ((peek = getchar()) != EOF && !isspace(peek)))
    {
        clear_stream(stdin);
        printf("Invalid integer. Please try again: ");
        fflush(stdout);
    }
    
    /* Return the peeked character if there was one */
    if (peek != EOF) {
        clearerr(stdin); /* Clear any error state peek may have caused */
        ungetc(peek, stdin);
    }
    
    printf("You entered %d\n", value);
    
    return 0;
}