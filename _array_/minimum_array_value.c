/*
	enter an array and search the minimun value.
*/
#include <stdio.h>

int minimum_array_value(int array[],int size)
{
     int i, maximum = array[0];

     for (i = 1; i < size; i++)
          if (array[i] < maximum)
               maximum = array[i];

     return maximum;
}

int main()
{
     int array[7] = { 1,3,5,2,7,6,4 };

     printf("\n minimum value is %d \n",minimum_array_value(array,7));

     return 0;
}