#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &x);
		int result=0;
		int m=x/2-1;
		for(int i=m; i>0; i++)
			result+=m;

		printf("%d\n", result);


	}



}