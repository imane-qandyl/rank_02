// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
#include <unistd.h>
#include <stdio.h>
#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i])
    {
        j = 0;
        while (reject[j] )
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
int main() {
    char s[10] = "abc123";
    char accept[10] = "c";
    size_t length = ft_strcspn(s, accept);
    printf("Length of initial segment: %zu\n", length);
    return 0;
}
//if== retunr the index wehere it found