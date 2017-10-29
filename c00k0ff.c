#include<stdio.h>
#include<string.h>
int main()
{
	 int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	 	 long long int n;
		 scanf("%lld",&n);
		  long long int i,count1=0,count2=0,count3=0,count4=0,count5=0; 
	 	 for(i=0;i<n;i++)
	 	 {
	 	 	 char str[100005];
			
			 scanf("%s",&str);
	 	 	 if(strcmp(str,"cakewalk")==0)
	 	 	  count1++;
	 	 	 else if(strcmp(str,"simple")==0)
	 	 	  count2++;
	 	 	 else if(strcmp(str,"easy")==0)
	 	 	  count3++;
	 	 	 else if(strcmp(str,"easy-medium")==0||strcmp(str,"medium")==0)
	 	 	  count4++;
	 	 	 else if(strcmp(str,"medium-hard")==0||strcmp(str,"hard")==0)
	 	 	  count5++;
		  }
		  if(count1>=1&&count2>=1&&count3>=1&&count4>=1&&count5>=1)
		  printf("Yes\n");
		  else
		  printf("No\n");
	 }
	 return(0);
} 