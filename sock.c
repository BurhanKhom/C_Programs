#include <stdio.h>

int main()
{
    int size, i, j, count, result=0;
    scanf("%d", &size);
    int a[size], freq[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    for(i=0; i<size; i++)
        result=result+(freq[i]/2);
    
    printf("%d\n", result);

    return 0;
}