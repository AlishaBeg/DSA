/*
     copy the array in reverse order.
*/
#include <stdio.h>

void reverse_copy_array(int array[], int copy[], size)
{
     int i;

     for (i = 0; i < size; i++)
          copy[i] = array[size - i];
}

int main()
{
     int array[] = { 1,3,5,2,7,6,4 };

     int copy[7];

     reverse_copy_array(array,copy,7);

     for (i = 0; i < size; i++)
          printf("\n - %d",copy[i]);

     return 0;
}