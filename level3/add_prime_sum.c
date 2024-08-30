// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <stdio.h>
#include <unistd.h>

void put_nbr(int nb)
{
    char res;
    if(nb >= 10)
        put_nbr(nb / 10);
    res = nb % 10 + '0';
    write(1,&res,1);
}
int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(res);
}
int is_prime(int n)
{
    
    int i = 2;
    while(i * i <= n)
    {
        if(n % i == 0) //is not prime
            return(0);
        i++;
    }
    return(1);//is prime
}
int main(int argc, char **argv)
{
    int res = 0;
    
    if(argc == 2)
    {
        int nb = ft_atoi(argv[1]);
        while (nb > 1)
        {
            if(is_prime(nb))
                res += nb;
            nb--;
        }
        put_nbr(res);
    }
    
    else
        put_nbr(0);
    write(1,"\n",1);
}
