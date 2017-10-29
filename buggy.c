#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		if(x+y>9)
			printf("%d\n", (x+y)%10);
		else
			printf("%d\n", x+y);
	}
}
