#include<stdio.h>
int main()
{
	int x, n, p, i, hard, cakeWalk;
	scanf("%d", &x);
	while(x>0)
	{
		hard=0;
		cakeWalk=0;
		scanf("%d", &n);
		scanf("%d", &p);
		while(n>0)
		{
			scanf("%d", &i);

			if(i>=p/2)
				cakeWalk++;
			else if(i<=p/10)
				hard++;
			else
				{
				//do nothing
				}

			n--;

		}

		if(cakeWalk==1 && hard==2)
			printf("yes\n");
		else
			printf("no\n");

		x--;
	}


}