#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char s[100000];
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s);
		int j=0;
		char c;

		int a=0, b=0;

		while(s[j]!='\0')
		{
		  int d=0;

		  if(s[j]=='A') 
		  	{	a++;
		  		c='A';
		  	}
		  else if(s[j]=='B')  
		  	{
		  		b++;
		  		c='B';
		  	}
		  else if(s[j]=='.' && (a>0 || b>0))
		  {
		    int k=j;

		    while(s[k]=='.')
		    {
		      k++; 
		      d++;
		    }
		    if((c=='A') && (s[k]=='A'))  
		    	a+=d;
		    else if((c=='B') && (s[k]=='B')) 
		    	b+=d;

		    j=k-1;
		  }
		  
		  j++;
		}
		printf("%d %d\n", a, b);
		
	}
}