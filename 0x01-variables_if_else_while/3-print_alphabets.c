#include <stdio.h>
/**
 * main - prints the alphabet.
 * Return: Always 0
 */
int main(void)
{
	char alx[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alx[i]);
	}
	putchar('\n');
	return (0);
}
