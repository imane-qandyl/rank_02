// Assignment name  : lcm
// Expected files   : lcm.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function who takes two unsigned int as parameters and returns the
// computed LCM of those parameters.

// LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
// integer divisible by the both integers.

// A LCM can be calculated in two ways:

// - You can calculate every multiples of each integers until you have a common
// multiple other than 0

// - You can use the HCF (Highest Common Factor) of these two integers and
// calculate as follows:

// 	LCM(x, y) = | x * y | / HCF(x, y)

//   | x * y | means "Absolute value of the product of x by y"

// If at least one integer is null, LCM is equal to 0.

// Your function must be prototyped as follows:

//   unsigned int    lcm(unsigned int a, unsigned int b);

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int result;
    if (a == 0 || b == 0)
        return(0);
    if (a > b)
        result = a;
    else
        result = b;
    while (1)
    {
        if (result % a == 0 && result % b == 0)
            return(result);
        result++;
    }
}

int main(void)
{
    printf("%d\n", lcm(17, 22));
}