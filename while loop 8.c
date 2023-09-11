#include<stdio.h>

main()
{
	int a=1,n,sum;
	printf("enter number");
	scanf("%d",&n);
	
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("sum=%d",sum);
}
