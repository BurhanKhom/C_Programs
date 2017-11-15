#include<stdio.h>
int main()
{	
	int t;
	scanf("%d", &t);
	long long a[t];
	for(int i=0; i<t; i++)
		scanf("%lld", &a[i]);

	long long i, j, bud=0, max=0;
	for(i=0; i<t; i++)
	{
		bud=0;
		for(j=0; j<t; j++)
		{
			if(a[j]>=a[i])
				bud=bud+a[i];
		}

		if(bud>max)
			max=bud;
	}

	printf("%lld\n", max);



}