/*
    convert string into uppercase
*/
#include <stdio.h>

void *uppercase(char *string)
{
	int i = 0;

    char *convert = "hellow";
	
	while(string[i] != '\0')
	{
		if(string[i] >= 97 && string[i] <= 122)
			convert[i] = string[i++]-32;	
		else
			convert[i] = string[i++];
	}

    return convert;
}

int main()
{
	char *string = "Welcome Master";

    printf("\n %s \n",uppercase(string));

    return 0;
}