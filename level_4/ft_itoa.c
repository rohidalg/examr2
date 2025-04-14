// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <unistd.h>

int	n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int n;
	int len;
	char *str;

	len = n_len(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	n = nbr;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len-- > 0)
	{
		if (str[len] == '-')
			break ;
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}