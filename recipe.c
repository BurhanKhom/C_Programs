#include<stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i=1; i<n; i++)
        result = gcd(arr[i], result);
 
    return result;

}
int main()
{
	int n, x;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &x);
		int a[x];
		for(int i=0; i<x; i++)
			scanf("%d", &a[i]);

		int result=findGCD(a, x);

		for (int i = 0; i < x; ++i)
			printf("%d ", a[i]/result);

		printf("\n");



	}
}