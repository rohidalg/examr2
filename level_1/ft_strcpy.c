// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

#include <stdio.h>
#include <unistd.h>

void	ft_strcpy(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		s2[j++] = s1[i++];
	s2[j] = '\0';
}

// int main()
// {
//     char str1[] = "holiwi";
//     char str2[7];

//     ft_strcpy(str1,str2);
//     printf("s1 = %s\n", str1);
//     printf("s2 = %s\n", str2);
//     return(0);
// }