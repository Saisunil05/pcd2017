#include<stdio.h>
int main()
{
int order , i;
int a[15],x,sum;
printf("Enter the degree of the polynomial:\n");
scanf("%d",&order);
printf("Enter the coefficients of a polynomial starting with lowest coefficient\n");
for(i=0;i<order;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value of x\n");
scanf("%d",&x);
sum=0;
for(i=order-1;i>=0;i--)
{
sum=((sum*x)+a[i]);
}
sum=sum+a[0];
printf("\n the value of the polynomial%d%d",x,sum);
return 0;
}
