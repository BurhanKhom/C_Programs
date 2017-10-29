#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long a[n];
	for(int i=0; i<n; i++)
		scanf("%lld", &a[i]);

	int i, j;
	long long revenue=0;
	long long max=a[0];

	for(i=0; i<n; i++)
	{	
		revenue=0;

		for(j=0; j<n; j++)
		{
			if(a[j]>=a[i])
			{
				revenue=revenue+a[i];
			}

		}

		if(revenue>max)
			max=revenue;
		
		


	}
	printf("%lld\n", max);



}