#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{

	char s[10];
	char price[10^9];
};

int main()
{
	int n, i, j=0;
	char price[10^9];
	char name[10];
	scanf("%d", &n);
	struct node a[n];
	for (i=0; i<n; i++)
	{
		j=0;
		int four=0, seven=0;
		scanf("%s %s", name, price);
		while(price[j]!='\0')
		{
			if(price[j]=='7')
				seven++;
			else if(price[j]=='4')
				four++;
			else
				break;

			j++;
		}
		if(j==strlen(price))
		{
			if(seven==four)
				{
					strcpy(a[i].s, name);
					strcpy(a[i].price, price);
				}
		}

	}
	for(int i=0; i<n; i++)
		printf("Name : %s\tPrice : %s\n", a[i].s, a[i].price);


}