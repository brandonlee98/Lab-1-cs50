// Abstraction and scope

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}

//Prompt user for postive integer
int get_positive_int(void)
{
    int n;
    do // lo hace antes de revisar la condicion
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 1);
    return n;
}