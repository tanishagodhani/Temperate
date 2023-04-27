#include<stdio.h>
main()
{
	int fact=1,n,a=1;
	printf("enter num=");
	scanf("%d",&n);
	
	do{
		fact=fact*n;
		n--;
		{
			printf("factoraial number=%d\n",fact);
		}
		
		
	}while(n>=a);
}
