#include<stdio.h>
int main()
{
	int s, n, m;
	scanf("%d%d%d", &s, &n, &m);
	int i, k[n], u[m];

	for(i=0; i<n; i++)
		scanf("%d", &k[i]);
	for(i=0; i<m; i++)
		scanf("%d", &u[i]);

	int res;

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			int x = k[i]+u[j];

			if(x<=s)
				


		}
	}




}