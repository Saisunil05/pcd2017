#include<stdio.h>
#include<math.h>

void main()
{
	int i,n,sum=0;
	float a[50],mean=0,var=0,sd=0;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	printf("\nEnter the %d numbers:",n);
	for(i=0;i<n;i++)	
	{
		scanf("%f",(a+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+(*(a+i));
	}
	
	mean=sum/n;
	printf("\nMean=%f",mean);
	
	for(i=0;i<n;i++)
	{
		var=var+pow((*(a+i)-mean),2);
	}
	var=var/n;
	sd=sqrt(var);
	
	printf("\nThe Standard Deviation=%f",sd);
}
	

