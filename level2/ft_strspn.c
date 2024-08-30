// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);
#include <unistd.h>
#include <stdio.h>
size_t	ft_strspn(const char *s, const char *accept)
{
   size_t i = 0;  
    while(s[i])
    {
        while(*accept)
        {
            if(s[i] == *accept)
                  break;
            accept++;
        }
        if (*accept == '\0') {
            break;
        }
        i++;
    }
    return(i);
}

// int main() {
//     char s[10] = "abc123";
//     char accept[20] = "abc";
//     size_t length = ft_strspn(s, accept);
//     printf("Length of initial segment: %zu\n", length);
//     return 0;
// }
//how many occurance in same order