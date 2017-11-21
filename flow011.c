#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		float sal, hra, da, gross;
		scanf("%f", &sal);
		if((int)sal<1500)
		{
			hra = sal*0.1;
			da = sal*0.9;

		}
		else
		{
			hra = 500;
			da = sal*0.98;		
		}
		gross=sal+hra+da;
		if(fmod(gross, 10) > (float)floor(gross))
			printf("%d\n", (int)fmod(gross, 10));
		else
			printf("%.1f\n", gross);


	}




}