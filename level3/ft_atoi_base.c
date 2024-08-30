// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);
#include <unistd.h>
#include <stdio.h>
int to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(c + 32);
    return(c);
}

int char_to_value(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }
    return -1; // Invalid character
}
//converts a string representing a number in a given base (between 2 and 16) into its integer value
int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;

	if (str == NULL || str_base < 2 || str_base > 16)
		return 0;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str)
	{
		int value = char_to_value(to_lower(*str));
        if (value == -1 || value >= str_base)
            break;
		result = result * str_base + value;//1a" in base 16:  0 * 16 + 1 = 1 and 1 * 16 + 10 = 26.
		str++;
	}
	return (result * sign);
}
int main() {
    const char *input = "1a3";//26 * 16 + 3
    int base = 16;
    int result = ft_atoi_base(input, base);
    printf("Result: %d\n", result);
    return 0;
}