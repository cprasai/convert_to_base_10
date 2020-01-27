#include <stdio.h>

static int int_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}

int conversion_algorithm(int base, int number)
{
    int output = 0;

    for (int i = 0; number != 0; i++)
    {
        output += (number % 10) * (int_pow(base, i));
	number /= 10;
    }    

    return(output);
 
}
