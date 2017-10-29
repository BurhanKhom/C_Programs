#include<stdio.h>
int main()
{
	int n, i;
	while(1)
	{
		scanf("%d", &n);
		int flag=0;
		if(n==0)
			break;
		else
		{
			int a[n+1], inverse[n+1];
			for(i=1; i<=n; i++)
				scanf("%d", &a[i]);

			for(i=1; i<=n; i++)
				inverse[a[a[i]]]=a[i];

			for(i=1; i<=n; i++)
			{

				if(a[i]!=inverse[i])
				{
					flag=1;
					break;
				}
			}

			if(flag==1)
				printf("not ambiguous\n");
			else
				printf("ambiguous\n");

		}



	}	

}