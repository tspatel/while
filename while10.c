#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter the value =");
	scanf("%d",&n);
	while(i<=n)
    {
    	sum=sum+i;
    	i++;
    	
   	}	
	printf("sum of all element  =%d",sum);
}
