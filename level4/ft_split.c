// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *s)
{
	int i = 0;
	int j = 0;
	int k;
    if (!s)
        return(NULL);
	char **split = malloc(1024);
	while(s[i] == 32)
		i++;
	while(s[i])
	{
		if(s[i] > 32)
		{
			k = 0;
			split[j] = malloc(1024);
			while(s[i] > 32)
			{

				split[j][k++] = s[i++];
			}
			split[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	split[j] = 0;
	return split;
}



