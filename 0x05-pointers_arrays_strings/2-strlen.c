#include "main.h"
/**
 * _strlen-Finds the length of a string.
 * @s:String pointer to the string whose length is to be found.
 * Return: returns the length of the string.
 */
int _strlen(char *s)
{
	 int count, inc;

	 inc = 0;
	 for (count = 0; s[count] != '\0'; count++)
	{
		 inc++;
	}

	return (inc);
}
