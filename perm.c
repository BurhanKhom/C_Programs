#include<stdio.h>

void swap(int a[], int y)
{	int temp, i;
	
	if(y%2==0)
		{
			for (i=0; i<y; i+=2)
				{
		
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}	
	
		}
	else
		{
			for (i=0; i<y-1; i+=2)
				{
		
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}

				temp=a[i-1];
				a[i-1]=a[i];
				a[i]=temp;	

		}



	




	for (int i=0; i<y; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}

int main()
{	int x=0, n, y;
	scanf("%d", &n);
	while(x<n)
	{
		scanf("%d", &y);
		int a[y];
		for (int i=0; i<y; i++)
			{
				a[i]=i+1;
			}
			swap(a, y);
			x++;

	}
	return 0;
}