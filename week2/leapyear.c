#include<stdio.h>
int leapyear(int year)
{
	int year,lpyear;
	if(year%4==0&&year%100==0||year%400==0)
	{	
		lpyear=year;
	}
		return lpyear;
	else
	{
		return 0;		
	
}

int main()
{
	int ly,y;
	printf("\nEnter the year:");
	scanf("%d",&y);
	ly=leapyear(y);
	printf("Year %d is a leap year",ly);
}	
