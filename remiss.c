#include<stdio.h>
int main()
{
	int n, a, b;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		if(a>b)
			printf("%d %d\n", a, a+b);
		else
			printf("%d %d\n", b, a+b);
	}


}
