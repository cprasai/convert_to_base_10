#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conversion_algorithm.h>

int main()
{

    // Desc: This is a program that shall convert any number to the base ten system.
    // Input: Base, Number
    // Output: Base (always 10), Number

    int base, number;

    char str[100];

    printf("Convert from base: ? What is your number ?\n");

    for (int i = 0; (str[i] = getchar()) != '\n'; i++)
    {
        if (str[i] == ' ')
	{
            base = atoi(str);
	    memset(str, '\0' , sizeof(str));
	    i = -1;
	}
    }	
    
    number = atoi(str);

    number = conversion_algorithm(base, number);

    printf("New Number is %i in base: 10\n", number);

    return 0;
}
