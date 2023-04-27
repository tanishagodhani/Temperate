#include<stdio.h>
main()
{
    int n,count=0;
         printf("enter num=");
         scanf("%d",&n);
         while(n!=0)
   {   
	n=n/10;
	count++;
   }
          printf("the nymber of digits%d\n",count);
   }  
