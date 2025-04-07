// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------
//
// Reproduce the behavior of the function strdup (man strdup).
//
// Your function must be declared as follows:
//
// char    *ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	cpy = malloc(sizeof(*cpy) * (len + 1));
	if (cpy != NULL)
	{
		while (src[i])
		{
			cpy[i] = src[i];
			i++;
		}
		cpy = '\0';
	}
	return (cpy);
}
