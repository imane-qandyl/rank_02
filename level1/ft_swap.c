// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);
void	ft_swap(int *a, int *b)
{
    int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}
// #include <stdio.h>
// int main()
// {
//     int d = 12;
//     int p = 42;
//     ft_swap(&d,&p);
//     printf("%d",d);
// }