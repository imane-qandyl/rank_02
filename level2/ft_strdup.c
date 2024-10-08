// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
  char *dst;
  int i = 0;
  int len;
  while(src[len])
  {
    len++;
  }
  dst = malloc(len + 1);
  res[len] = '\0';
  while(i < len)
  {
    dst[i] = src[i];
    i++;
  }
  return(dst);
}
int main()
{
    char str[10] = "imane";
    char *dup = ft_strdup(str);
    printf("%s",dup);
}
