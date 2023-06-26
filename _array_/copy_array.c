/*
	copy the arrray into another array.
*/
#include <stdio.h>

void copy_array(int real_array[], int size, int copy_array[])
{
     int i;
     
	for(i = 0; i < size; i++)
          copy_array[i] = real_array[i];
}

int main()
{
	int i, copy[7], array[7] = { 1,3,5,2,7,4,6 };

     copy_array(array,7,copy);

     for(i = 0; i < 7; i++)
		printf("\n %d",copy[i]);

     return 0;
}