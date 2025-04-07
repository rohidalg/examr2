// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------
//
// Write a function that reverses (in-place) a string.
//
// It must return its parameter.
//
// Your function must be declared as follows:
//
// char    *ft_strrev(char *str);
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}