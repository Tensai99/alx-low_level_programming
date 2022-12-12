#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints all sindle digit number of base 16
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
