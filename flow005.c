#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	while(n--)
	{
		int count=0;
		scanf("%d", &x);
		while(x>=100)
		{
			count+=x/100;
			x%=100;
		}
		while(x>=50)
		{
			count+=x/50;
			x%=50;
		}
		while(x>=10)
		{
			count+=x/10;
			x%=10;
		}
		while(x>=5)
		{
			count+=x/5;
			x%=5;
		}
		while(x>=2)
		{
			count+=x/2;
			x%=2;
		}
		while(x>=1)
		{
			count+=x;
			x%=1;
		}
	

		printf("%d\n", count);

	}
}
