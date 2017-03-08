#include<stdio.h>
int prime(int num)
{
int i,p;
for(i=2;i<=num;i++)
{
if(num%i!=0&&num%1==0||num%num==0)
{
return 1;
}
else
if(num%i=0&&num%1==0||num%num==0)
{
return 2;
}
}
}

int main()
{
int n,pr;
printf("\nEnter the number:");
scanf("%d",&n);
pr=prime(n);
switch(pr)
{
case 1:
printf("Number %d is prime",n);
break;
case 2:
printf("Number %d is not a prime",n);
break;
default:
break;
}
return 0;
}
