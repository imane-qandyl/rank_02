// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>
#include <unistd.h>
#include <stdlib.h>
void	rostring(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *p = malloc(1024);
	while(*s && *s == ' ')
		s++;
	while(*s && *s != ' ')
		p[i++]= *(s)++; // first word
	while(*s)
	{
		if(*s == ' ' || *s == '\t')
		{
			s++;
			if(*s != '\0' && *s != ' ')
			{
				if(j == 1) // flag means we previously processed characters we should p "\n" befor the current word
					write(1, " ", 1);//separate the words
				else 
					j = 1;
			}
		}	
		else
		{
			write(1, s++,1);
			k = 1;
		}
	}	
	if(k == 1)
		write(1, " ", 1);
	while(*p)
		write(1, p++, 1);
}

int main(int ac, char **av)
{
	if(ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
}