#include <stdio.h>

int main()
{
    int size, i, j, count, result=0;
    scanf("%d", &size);
    int arr[size], freq[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            result=result+(freq[i]/2);
        }
    }
    printf("%d\n", result);

    return 0;
}