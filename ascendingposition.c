#include <stdio.h>
 
voi main()
{
	int n,a[30],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=a[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
}
