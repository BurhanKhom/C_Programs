#include<stdio.h>
int main()
{
	int n, i, x;
	scanf("%d", &n);
	
	while(n--)
	{
		int found=0;
		scanf("%d", &x);
		char a[x];
		scanf("%s", a);
		
		for(i=0; a[i]!='\0'; i++)
		{
			if(a[i]!='N')
			{
				if(a[i]=='Y')
					printf("NOT INDIAN\n");
				else 
					printf("INDIAN\n");
				
				found=1;
				break;
			}
		}
		if(found==0)
			printf("NOT SURE\n");


	}
}