#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, q;
	scanf("%d%d", &n, &q);
	int a[n+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	while(q--)
	{
		int l, r, k;
		scanf("%d%d%d", &l, &r, &k);
		for(i=l; i<=r; i++)
			k = floor(k/a[i]);
		printf("%d\n", k);
	}
}