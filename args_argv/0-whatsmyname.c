#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: Arrgument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	/* argv[0]: Esta línea imprime el primer elemento de argv,
	 * que es la cadena de caracteres que representa el nombre del programa. */
	printf("%s\n", argv[0]);
	/* Esta línea está utilizando la sintaxis (void) para evitar  la advertencia
	 * de "variable no utilizada" que podría surgir si no se está utilizando argc 
	 * en el programa. Simplemente se está indicando al compilador que ignore la 
	 * variable argc en este caso. */
	(void)argc;
	return (0);
}
