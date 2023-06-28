#include "main.h"
/**
  * *_strcat -  concatenates two strings.
  * @*dest - chain text of destine
  * @*src - font of text
  */
char *_strcat(char *dest, char *src)
{
	char *stringFinal = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (stringFinal);
}
