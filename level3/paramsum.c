// Assignment name  : paramsum
// Expected files   : paramsum.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>

#include <unistd.h>


void ft_putnbr(int number)
{
    char str[10] = "0123456789";
    if (number >= 10)
        ft_putnbr(number / 10);
    write(1, &str[number % 10], 1);
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc <= 1)
        ft_putnbr(0);
    else
        ft_putnbr(argc - 1);
    write(1, "\n", 1);
}