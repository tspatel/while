#include<stdio.h>
main()
{
	int i=0,n;
	printf("enter the number =");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		printf("%d\n",i);
		i++;
	}
	return 0;
}
