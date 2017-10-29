#include<stdio.h>
int main()
{
	int n, x, ans=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &x);

		while(x>0)
		{
			ans=ans + x % 2;
			x=x/2;

		}

		printf("%d\n", ans);

	}
}