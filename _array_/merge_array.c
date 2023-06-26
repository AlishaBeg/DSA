/*
	merge two array in single array.
*/
#include <stdio.h>

int merge_array(int array1[], int size1, int array2[], int size2, int array3[])
{
     int i;

     for (i = 0; i < (size1 + size2); i++)
          if (i < size1)
               array3[i] = array1[i];
          else
               array3[i] = array2[i - size1];

     return size1 + size2;
}

int main()
{
     int array1[] = { 1,2,3,4 };

     int array2[] = { 7,6,5 };

     int array3[9];

     int i, size = merge_array(array1,4,array2,3,array3);

     // array3[0] = array1[0];
     // array3[1] = array1[1];
     // array3[2] = array1[2];
     // array3[3] = array1[3];
     // array3[4] = array2[0];
     // array3[5] = array2[1];
     // array3[6] = array2[2];

	for (i = 0; i < size; i++)
          printf("\n - index[%d] value is %d",i,array3[i]);
     
     return 0;
}