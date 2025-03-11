// Nombre de la asignación: alpha_mirror
// Archivos esperados: alpha_mirror.c
// Funciones permitidas: write
// --------------------------------------------------------------------------------

// Escriba un programa llamado alpha_mirror que tome una cadena y la muestre
// después de reemplazar cada carácter alfabético por el carácter alfabético opuesto,
//  seguido de una nueva línea.

// 'a' se convierte en 'z', 'Z' se convierte en 'A'

// 'd' se convierte en 'w', 'M' se convierte en 'N'

// y así sucesivamente.

// No se cambia el uso de mayúsculas y minúsculas.

// Si el número de argumentos no es 1, se muestra solo una nueva línea.

// Ejemplos:

// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>

#include <unistd.h>

void	alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = 'a' + 'z' - *s;
		else if (*s >= 'A' && *s <= 'Z')
			*s = 'A' + 'Z' - *s;
		write(1, &*s, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
}