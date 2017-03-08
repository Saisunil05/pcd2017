#include<stdio.h>
int isleap(int yr)
{
	if(yr%400==0)
	{
		return 0;
	}
	else if(yr%100==0)
	{
		return 1;
	}
	else if(yr%4==0)
	{
		return 2;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int year,r;
	printf("\nEnter the year:");
	scanf("%d",&year);
	r=isleap(year);
	switch(r)
	{
		case 0:
			printf("\nIt is a quadranal leap year");
		break;
		case 1:
			printf("it is a century leap year");
		break;
		case 2:
			printf("it is a leap year");
		break;
		case -1:
			printf("it is not a leap year");
		default:
		break;
	}
	return 0;
}
	
