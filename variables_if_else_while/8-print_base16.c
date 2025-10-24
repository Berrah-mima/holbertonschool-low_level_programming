#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Affiche les chiffres de 0 à 9 */
	for (n = 0; n < 10; n++)
		putchar(n + '0');

	/* Affiche les lettres de a à f */
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}

