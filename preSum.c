#include<stdio.h>
int main()
{
	int t, n, i, j, k;
	scanf("%d", &t);
	
	while(t>0)
	{
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);

		int pre=0, suf=0, minSum, sum, index;
		
		for(i=0; i<n; i++)
		{
			for(j=0; j<=i; j++)
				pre=pre+a[j];

			for(k=i; k<n; k++)
				suf=suf+a[k];

			sum=pre+suf;

			if(i==0)
			{
				minSum=sum;
				index=0;
			}
			if(sum<minSum)
				{
					minSum=sum;
					index=i;
				}

			pre=0, sum=0, suf=0;


		}
		printf("%d\n", index+1);
		t--;
	}



}