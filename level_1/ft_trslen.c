// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str)

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int main()
{
    char str1[] = "hola";
    int len = ft_strlen(str1);
    printf("hay %i letras en str1",len);

    return 0;
}