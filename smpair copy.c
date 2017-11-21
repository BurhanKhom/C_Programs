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
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int i, n;
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		sort(a, n);
		printf("%d\n", a[0]+a[1]);
	}	
}