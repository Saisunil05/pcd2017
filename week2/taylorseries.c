#include<stdio.h>
#include<math.h>


float compute_sin(float x)
{
	float term,sum,prev,diff;
	int i;
	term=sum=diff=x;
	for(i=3;diff>0.000001;i=i+2)
	{
		prev=term;
		term=(-term*x*x)/(i*(i-1));
		diff=fabs(prev-term);
		sum=sum+term;
	}
	return sum;
}

float convert_radians(float d)
{
	float rad;
	rad=(3.142/180)*d;
	return rad;
}

int main()
{
	float degree,x,sum;
	printf("\n Enter the degree:");
	scanf("%f",&degree);
	x=convert_radians(degree);
	sum=compute_sin(x);
	printf("sin(%f)=%f",degree,sum);
}
