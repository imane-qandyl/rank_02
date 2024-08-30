// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s1[i])
    {
        s1[i] = s2[i];
        i++;
    }
    return(s1);
}
// #include <stdio.h>
// int main()
// {
//     char i[10] ="iane";
//     char d[10] = "kdf";
//     printf("%s",ft_strcpy(i,d));
// }