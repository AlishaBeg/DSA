/*
	find the index of the value present in the array.
*/
#include <stdio.h>

int array_index(int array[],int size,int value)
{
     int i;

     for(i = 0; i < size; i++)
          if (array[i] == value)
               return i;
}

int main()
{
     int array[7] = { 1,3,5,2,7,6,4 };

     printf("\n index value of array is %d \n",array_index(array,7,5));

     return 0;
}