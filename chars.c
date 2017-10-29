#include<stdio.h>
int main()
{
	char i[4];
	scanf("%s", i);
	int x = i[1]-'0';
	int y = i[3]-'0';
	printf("%d\n", x+y);

	return 0;

}