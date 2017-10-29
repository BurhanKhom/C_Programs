#include<stdio.h>
void next(long long int num)
{
	long long int i, temp, rem, rev=0;

	for(i=num+1; ;i++)
	{	
		temp=i;
		rev=0;
		while(temp>0)
		{
			rem=temp%10;
			rev=(rev*10)+rem;
			temp=temp/10;
		}

		if(rev==i)
		{
			printf("%lld\n", rev);
			break;
		}




	}
	




}



int main()
{	
	int n, x=0;
	long long int num;
	scanf("%d", &n);
	while(x<n)
	{
		scanf("%lld", &num);

		next(num);

		x++;

	}
	return 0;
}