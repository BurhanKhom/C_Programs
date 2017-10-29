#include<stdio.h>
int main()
{
	int n;
	float q, p;

	scanf("%d", &n);
	while(n--)
	{
		scanf("%f%f", &q, &p);
		if(q>1000)
			printf("%.6f\n", ((q*p)-(q*p*0.10)));
		else
			printf("%.6f\n", q*p);
	}
}