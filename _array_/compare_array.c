/*
	compare two arrays are some or not.
*/
#include <stdio.h>

int compare_array(int array1[], int array2[],int size)
{
     int i;

     for (i = 0; i < size; i++)
		if (array1[i] != array2[i])
               return 0;
	return 1;
}

int main()
{    
     int array1[] = { 1,2,3,4,5 };
     
     int array2[] = { 1,2,0,4,5 };

     if (compare_array(array1,array2,5))
		printf("\n array is some \n");
	else
		printf("\n array is not some \n");

     return 0;
}