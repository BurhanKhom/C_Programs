#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int i, j, n, count, flag;
		scanf("%d", &n);
		char s[n][10];
		count=0;
		for(i=0; i<n; i++)
		{
			scanf("%s", s[i]);
			flag=0;
			for(j=0; j<i; j++)
			{
				if(strcmp(s[j], s[i]) == 0)
					flag=1;
			}
			if(flag)
				count--;
			else
				count++;
		}

		printf("%d\n", count);
	}
}