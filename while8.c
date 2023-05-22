#include<stdio.h>
main()
{
	int n,count =1;
	printf("enter the number :-");
	scanf("%d",&n);
	
	printf("multiplication table %d =\n",n);
	while(count<=10)
	{
		printf("%d x %d =%d\n",n,count, (n*count));
		count++;
		
	}
	
	
}
