#include<stdio.h>
int main()
{
	int n, q, l, r;
	scanf("%d%d%d%d", &n, &q, &l, &r);

	int a[n+1];
	for(int i=0; i<n+1; i++)
		a[i]=0;

	while(q--)
	{
		int count=0, p, x, y;
		scanf("%d%d%d", &p, &x, &y);
		if(p==1)
			a[x]=y;
		else
		{	
			int i, j, max=0;
			for (i=x; i<=y; ++i)
			{

				for(j=x; j<=i; j++)
				{
					if(a[j]>a[x])
						max=a[j];
					else
						max=a[x];
				}
				
				if(max>=l && max<=r)
						count++;

			}

			
			printf("%d\n", count);
		}
		


	}

}