#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,n,count=0;
  char a[10];
  scanf("%s",a);
  n=strlen(a);
  for(i=1;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        count=1;
        break;
      }
      else
      continue;
    }
}
if(count==0)
printf("Yes");
else
printf("no");
}
