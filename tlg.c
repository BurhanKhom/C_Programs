#include<stdio.h>
int main()
{
	int n1,n2,t,i,s2=0,s1=0,max=0,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		{
			scanf("%d%d",&n1,&n2);
			s1+=n1;s2+=n2;
			if(s1>s2 && max<s1-s2)
				{
					max=s1-s2;
					p=1;
				}
			else if(s1<s2 && max<s2-s1)
				{
					max=s2-s1;
					p=2;
				}
		}
	printf("%d %d",p,max);
	return 0;
} 