#include<stdio.h>
int count(char a[], int l, int r)
{



}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{	
		char s[100000], c='x';
		scanf("%s", s);
		int i, j, a=0, b=0, count=0;
		for (i = 0; s[i]!='\0'; ++i)
		{
			if(s[i]=='A')
			{	
				a++;
				for(j=i+1; s[j]!='\0'; j++);
				{
					if(s[j]=='A')
					{	

						a+=count;
						a++;
						break;
					}
					else if(s[j]=='.')
						count++;
				}
				count=0;
			}
			else if(s[i]=='B')
			{	
				b++;
				for(j=i+1; s[j]!='\0'; j++);
				{
					if(s[j]=='B')
					{	

						b+=count;
						b++;
						break;
					}
					else if(s[j]=='.')
						count++;
				}
				count=0;
			}
			
		}
		printf("%d %d\n", a, b);

	}





}