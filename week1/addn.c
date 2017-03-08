#include<stdio.h>
int nsum(int n);
int main()
{
int num;
printf("Enter a positive integer\n");
scanf("%d",&num);
printf("Sum of n numbers is =%d\n",nsum(num));
return 0;
}
int nsum(int n)
{
if(n!=0) 
return n+nsum(n-1);
else return n;
}
