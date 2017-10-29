#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int t, r, a, b, c, d, e, f;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d%d", &r, &a, &b, &c, &d, &e, &f);

		float dis1, dis2, dis3;
		dis1=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
		dis2=sqrt(((c-e)*(c-e))+((d-f)*(d-f)));
		dis3=sqrt(((a-e)*(a-e))+((b-f)*(b-f)));

		if(dis1<=r && dis2<=r)
		{
			printf("yes\n");
		}
		else if(dis1<=r && dis3<=r)
		{
			printf("yes\n");
		}
		else if (dis2<=r && dis3<=r)
		{
			printf("yes\n");
		}
		else
			printf("no\n");







	}
}