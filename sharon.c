#include<stdio.h>
struct node{

	char s[10];
	char price[10^9];
	int choice=0;
};

int main()
{
	int n;
	scanf("%d", &n);
	int temp=n;
	struct node a[n];
	int i=0;
	while(n--)
	{
		scanf("%s%lld", a[i].s, a[i].price);
		int four=0, seven=0;

		for(int j=0; a[i].price[j]!='\0'; j++)
		{
			if(a[i].price[j]!='4' || a[i].price[j]!='7')
				{
					a[i].choice=0;
					break;
				}
			else if(a[i].price[j]=='4')
					four++;
			else 
					seven++;
		}
		if(four==seven)
			a[i].choice=1;

		i++;
	}

	for(i=0; i<temp; i++)
	{	
		if(a[i].choice==1)
		{
			if(strcmp(a[i].price))
		}


	}





}