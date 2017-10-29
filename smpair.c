#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	while(n--)
	{	
		int result=0, count=0;
		scanf("%d", &x);
		int a[x], b[10000002];
		for(int i=0; i<10000002; i++)
			b[i]=-1;
		for (int i = 0; i < x; ++i)
		{
			scanf("%d", &a[i]);
			b[a[i]]=a[i];
		}

		for(int i=0; i<10000002; i++)
		{
			if(b[i]!=-1)
			{
				count++;
				result+=b[i];

			}
			if(count==2)
			{
				printf("%d\n", result);
				break;
			}
		}


	}
}