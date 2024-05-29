#include<stdio.h>
int main(){
	int i, j, size, temp;
	printf("Enter the size of the array:");
	scanf("%d", &size);
	int array[size];
	printf("Enter %d elements of the array:", size);
	for (i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	//bubble sort
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(array[i]>array[j])
			
			{
				temp= array[i];
				array[i]= array[j];
				array[j]= temp;
			}
		}
	}
	printf("Sorted array:");
	for(i=0; i<size; i++)
	{
		printf("%d", array[i]);
	}
	//binary search
	int target, left=0, right= size-1, middle;
	printf("Enter the target element:");
	scanf("%d", &target);
	middle= (left+right)/2;
	while(left<=right)
	{
		if (array[middle]==target)
		{
			printf("%d Element found at %d location", target, middle);
			return 0;
		}
		else if (array[middle]<target)
		{
			left= middle+1;
		}
		else 
		{
			right= middle-1;;
		}
		middle= (left+right)/2;
	}
	printf("Element not found in the array");
	return 0;
}
