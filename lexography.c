#include<stdio.h>
void main()
{
  char b[20];
  int i,n;
  scanf("%s",b);
  n=strlen(b);
  for(i=n-1;i>=0;i--)
  {
      printf("%c",b[i]);
    }

}
