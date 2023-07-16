/*
	print the reverse string.
*/
#include <stdio.h>

void *reverse_string_print(char *string)
{
    int i, n = sizeof(string) - 1;

    char *convert;

    for (i = n; i >= 0; i--)
    {
        convert[i] = string[i];
    }
    return convert;
}

int main()
{
	reverse_string_print("root kali");

    return 0;
}
