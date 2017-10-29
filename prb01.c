#include <stdio.h>
int main()
{
    int n, x, i, flag = 0;

    scanf("%d",&x);
    while(x--){
        flag=0;
    scanf("%d", &n);	
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("yes\n");
    else
        printf("no\n");
    }
    return 0;
}