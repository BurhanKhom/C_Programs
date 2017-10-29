#include<stdio.h>



void sort(int array[], int size)
{
	int temp;
	int i, j;
	for(i=0; i<size; i++)	
	{	


		for(j=i;j<size-1;j++)
		{
	
			if(array[i]>array[j+1])
				
			{
				temp = array[i];
				array[i] = array[j+1];
				array[j+1] = temp;			
			
			}
			


		}

	}


}


int main(){
	int n;
	printf("Size : ");
	scanf("%d", &n);
	int arr[n];
	printf("Input : ");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);


	}

	sort(arr, n);

	for(int j=0; j<n; j++)
	{
		printf("%d ", arr[j]);


	}
	printf("\n");
	return(0);
}
