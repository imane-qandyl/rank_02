// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(res * sign);
}
// int main()
// {
//     printf("%d",ft_atoi("123"));
// }