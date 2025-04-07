// Assignment name  : snake_to_camel
// Expected files   : snake_to_camel.c
// Allowed functions: malloc, free, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in snake_case format
// and converts it into a string in lowerCamelCase format.

// A snake_case string is a string where each word is in lower case,separated by
// an underscore "_".

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// Examples:
// $>./camel_to_snake "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./camel_to_snake "hello_world" | cat -e
// helloWorld$
// $>./camel_to_snake | cat -e
// $

#include <unistd.h>

void	snake_to_camel(char *str)
{
	int i;
	int c;
	int upper;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
			upper = 1;
		else
		{
			if (upper)
			{
				c = str[i] - 32;
				upper = 0;
			}
			else
				c = str[i];
			write(1, &c, 1);
		}
		i++;
	}
}