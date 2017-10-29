#include<stdio.h>
void prefixSum(int a[], int x)
{	int i=0, j=0, flag=0, total=0, prevTotal=0, sSum=0, pSum=0;

	for(i=0; i<x; i++)
		{
			sSum=0;
			pSum=pSum+a[i];

			for(j=i; j<x; j++)
				sSum=sSum+a[j];

			if(i==0)
				prevTotal=pSum+sSum;


			total=pSum+sSum;

			if(total<prevTotal)
				{	
					prevTotal=total;
					flag=i;
				}



		}

		printf("%d\n", flag+1);


}


int main()
{	int n, i=0;
	scanf("%d", &n);
	while(i<n)
	{
		int x;
		scanf("%d", &x);
		int a[x];
		for (int i = 0; i<x; ++i)
			scanf("%d", &a[i]);
		prefixSum(a, x);
		a[0]='\0';
		i++;
		

	}	
}