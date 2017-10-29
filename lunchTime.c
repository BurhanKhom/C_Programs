#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		char x[100000];
		scanf("%s", x);
		x[strlen(x)]='\0';
		int i, j, k, flag=0;
		char res[strlen(x)], max[strlen(x)];
		for(i=0; x[i]!='\0'; i++)
		{
			
			for(j=0, k=0; x[j]!='\0'; j++)
			{
				if(j==i)
					continue;
				else
					res[k++]=x[j];
			}

			if(atoi(res)%6==0)
			{
				flag=1;
				if(i==0)
					strcpy(max, res);
				else
				{
					if(res>max)
						strcpy(max, res);
				}

			}
		}
		max[strlen(max)]='\0';
		if(flag)
		printf("%s\n", max);
		else
		printf("-1\n");
	}
}