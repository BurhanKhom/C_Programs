#include<stdio.h>
#include<string.h>
void replace(char st[], char pat[], char rep[])
{
	int strLen = strlen(st);
	int patLen = strlen(pat);
	int repLen = strlen(rep);
	int i=0, j=0, iLoop, count, flag=0;
	char temp[50];
	while(st[i]!='\0')
	{	
		j=0;

		while(st[i+j]==pat[j])
		{
			j++;

					if(j==patLen)
		{
			for(j=0; j<patLen; j++)
				st[i+j]=rep[j];
		}

		}

	i++;

	}

	printf("%s\n", st);
}
int main()
{
	char st[50], pat[50], rep[50];
	printf("String : ");
	scanf("%s", st);
	printf("Pattern : ");
	scanf("%s", pat);
	printf("Replace : ");
	scanf("%s", rep);

	replace(st, pat, rep);
}