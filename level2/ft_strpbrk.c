// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    while(*s1)
    {
        i = 0;
        while(s2[i])
        {
             if(*s1 == s2[i])
                return (char *)s1;
            i++;
        }
        s1++;
           
    }
    return NULL;
}
// int main()
// {
//     char s[] = "imanhhhe";
//     char c[] ="";
//     printf("%s",ft_strpbrk(s,c));
// }
//Return string from first occurance