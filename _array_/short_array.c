/*
     short the array in order
*/
#include <stdio.h>

void short_array(int array[], int size)
{
     int i, o, h;

     for (o = 0; o < size; o++)
		for (i = 0; i < size; i++)
			if (array[o] < array[i]) {
				h = array[i];
				array[i] = array[o];
				array[o] = h;
			}
}

int main()
{
     int i, array[] = { 1,7,2,6,3,5,4 };

     short_array(array,7);

     for (i = 0; i < 7; i++)
          printf("\n - index[%d] value is %d",i,array[i]);

     return 0;
}