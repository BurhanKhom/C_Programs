#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    char s[1000], flag=0;
    int check[123]={0};
    gets(s);
    for(int i=0; s[i]!='\0'; i++)
        check[s[i]]++;
    
    for(int i=65; i<=90; i++)
    {
        if(check[i]==0)
        {
            if(check[i+32]==0)
                flag=1;
    
        }
    }
    for(int i=0; i<123; i++)
    printf("%d\t", check[i]);
    if(flag==0)
        printf("pangram\n");
    else
        printf("not pangram\n");
    
        
        
    
    
    
}
