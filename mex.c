#include<stdio.h>
int main()
{
	int x, n, k, temp, flag, a;
	scanf("%d", &x);
	while(x>0)
	{
		scanf("%d%d", &n, &k);
		temp=0, flag=0;

        int comp[100001];
		for(int i=0; i<100001; ++i)
			comp[i]=-1;

		for (int i=0; i<n; ++i)
			{
				scanf("%d", &a);
				comp[a]=a;
			}

		for (int i=0; i<100001; ++i)
		{
			
			if(comp[i]==-1 && temp<k)
			{
				comp[i]++;
				temp++;
			}
			if(temp==k)
			{
			break;	
			}

		}

		int i;
		for (i=0; i<100001; ++i)
		{
			if(comp[i]==-1)
			{
				flag=1;
				break;
			}

		}
		if(flag==1)
			printf("%d\n", i);
			else
			printf("0\n");



		x--;


	}
	return 0;
}