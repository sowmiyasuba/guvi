#include <stdio.h>
 
int main()
{
 
        int array[50],  i, large;
 
       printf(" Enter  10 elements of  the array: ");
 
        for (i = 0; i < 10; i++)
		scanf("%d", &array[i]);
 
        large = array[0];
 
        for (i = 1; i <10; i++) 
        {
		if (large < array[i])
			large = array[i];
	}
 
        printf("\n max element present in the given 10 array is : %d", large);
 
        return 0;
}
 
