#include<stdio.h>
#include<string.h>
void main()
{
char c[10];
int i,n;
scanf("%s",c);
n=strlen(c);
for(i=0;i<n;i++)
{
	if(i%2==0)
	printf("%c",c[i]);
	
}
printf(" ");
for(i=0;i<n;i++)
{
	if(i%2!=0)
	{
		
		printf("%c",c[i]);
	}
}
}
