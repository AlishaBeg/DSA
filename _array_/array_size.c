/*
     find the size of array
*/
#include <stdio.h>

int array_size(int array[])
{
     int size = sizeof(array) / sizeof(array[0]);

     return size;
}

int main()
{
     int array[] = { 1,2,3,4,5,6 };


     // int size = (sizeof(array) / sizeof(array[0]));

     // printf("\n the size of array is %d\n\n",size);

     printf("\n the size of array is %d\n\n",array_size(array));

     return 0;
}