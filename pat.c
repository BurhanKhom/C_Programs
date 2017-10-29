#include<stdio.h>

char st[30],pat[10],rep[10];
int n,m;
void read()
{
	int i;
	printf("enter the main string\n");
	scanf("%s",st);
	printf("enter the pattern string\n");
	scanf("%s",pat);
	printf("enter the replacing string\n");
	scanf("%s",rep);
	for(i=0;st[i]!='\0';i++)
	n++;
	for(i=0;pat[i]!='\0';i++)
	m++;
}
void shadi()
{
	
	int i,j;
	int flag=0,count=0;
	
	for(i=0;i<n;i++)
	{
		j=0;
		while ((st[i+j]==pat[j])&&(j<m))
		{
			
			j++;
		}
		if(j==m)
		{
			flag=1;
			count++;
			for(j=0;j<m;j++)
			{
				st[i+j]=rep[j];
			}
			i=i+m-1;
		}	
	}
	if(flag==0)
	{
		printf("no match found\n");
	}
	else
	{
		printf("the number of matches are :%d\n",count);
		printf("the new main string is %s\n",st);
	}
}
void main()
{
	read();
	matching();
}