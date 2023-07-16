/*
	write a program to identify an alphabet, number, or any, in a string.
*/
#include <stdio.h>

void string_character_type(char string[])
{	
	int i = 0, n = 0, c = 0, s = 0;
	
	while (string[i] != '\0')
	{	
		if ((string[i] >= 33 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126))
        {
            s ++;
			string[i++];
        }
		if ((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
        {
            c ++;
			string[i++];
        }
		if (string[i] >= 48 && string[i] <= 57)
        {
            n ++;
			string[i++];
        }
	}
    printf("\n\t string length %d that inside { %d symbols | %d alphabets | %d number } \n",i,s,c,n);
}

int main()
{
	char *string = "nxxx_69+18";

    string_character_type(string);

    return 0;
}