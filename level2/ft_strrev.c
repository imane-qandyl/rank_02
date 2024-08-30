// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
   int i = 0;
   int len = 0;
   char tmp;
    while(str[len])
    {
        len++;
    }
    while( i < len/2)
    {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
        i++;
    }
    return(str);
}
// int main()
// {
//     char s[] = "imane";
//     printf("%s",ft_strrev(s));
// }