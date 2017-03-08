#include<stdio.h>
int palindrome(int num)
{
int temp,rev,rem;
temp=num;
rev=0;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(rev==num)
{
return 1;
}
else
{
return 2;
}
}

int main()
{
int n,p;
printf("\nEnter a number:");
scanf("%d",&n);
p=palindrome(n);
switch(p)
{
case 1:
{
printf("%d is a palindrome",n);
}
break;
case 2:
{
printf("%d is not a palindrome",n);
}
break;
default:
return 0;
}
}
