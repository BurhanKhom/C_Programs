#include<stdio.h>
#include<string.h>
int main()
{
	int t, i;
	scanf("%d", &t);
	char s1[10], s2[10];
	while(t--)
	{
		scanf("%s", s1);
		scanf("%s", s2);
		int x=strlen(s1), flag=0;
		for(i=0; i<x; i++)
		{
			if((s1[i]==s2[i]) || (s1[i]=='?' || s2[i]=='?')) 
				continue;
			else
				{
					flag=1;
					break;
				}
		}

		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
}