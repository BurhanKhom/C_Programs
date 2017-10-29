#include<stdio.h>
int main()
{	
	int n, x, luck=0, unLuck=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		{
			scanf("%d", &x);
			if(x%2==0)
				luck++;
			else
				unLuck++;

		}

		if(luck>unLuck)
			printf("READY FOR BATTLE\n");
		else
			printf("NOT READY\n");
}