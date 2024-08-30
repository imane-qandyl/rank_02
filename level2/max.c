// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.
#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    int max = tab[0];
    unsigned int i = 0;
    if (len == 0)
		return (0);
    while(i < len)
    {
        if (tab[i] > max)
        { 
            max = tab[i];
        }
        i++;
    }
    return(max);
}

// int main() {
//     int tab[] = {1, 2, 5};
//     int max1 = max(tab, 3);
//     printf("%d\n", max1);

//     return 0;
// }
