#include<stdio.h> 

int main(){
   int num,rem,odd=0,dig;

            

            scanf("%d",&num);

          

            while(num>0){

           dig = num % 10;

            num = num / 10;

           rem = dig % 2;
if(rem != 0)

           printf(" %d",dig);

            }

        return 0; 

    } 
