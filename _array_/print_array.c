/*
     print array with help of function
*/
#include <stdio.h>

void print_array(int array[], int size)
{
     int i;

     printf("\n - ");
     
     for (i = 0; i < size; i++)
          printf("\t %d",array[i]);

     printf("\n\n");
}

int main()
{
     int array[] = { 1,6,2,7,3,4,5 };

     print_array(array,7);

     return 0;
}