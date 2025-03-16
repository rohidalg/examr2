// Nombre de la asignación: camel_to_snake
// Archivos esperados: camel_to_snake.c
// Funciones permitidas: malloc, free, realloc, write
// --------------------------------------------------------------------------------

// Escriba un programa que tome una sola cadena en formato lowerCamelCase
// y la convierta en una cadena en formato snake_case.

// Una cadena lowerCamelCase es una cadena en la que cada palabra comienza con una letra mayúscula
// excepto la primera.

// Una cadena snake_case es una cadena en la que cada palabra está en minúscula,separada por
// un guión bajo "_".

// Ejemplos:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			c = str[i] + 32;
		}
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		camel_to_snake(argv[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }
