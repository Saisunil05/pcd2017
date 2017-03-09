#include<stdio.h>
int pn(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
		break;
	}
}

int main()
{
int a,prime;
printf("Enter a number:");
scanf("%d",&a);
prime=pn(a);

switch(prime)
{
	case 1:
		printf("\nnumber is not prime");
	break;
	case 2:
		printf("\nnumber is prime\n");
	break;
}
return 0;
}



