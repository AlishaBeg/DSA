/*
	calculate the length of a string.
*/
#include <stdio.h>

int string_length(char string[])
{
	int s = 0;

	for(s = 0;string[s] != '\0'; s++);

	// int s = printf(string);

    return s;
}

int main()
{
    char *string = "count the string length";
	
    printf("\n string length is %d",string_length(string));

    return 0;
}