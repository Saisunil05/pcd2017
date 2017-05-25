#include<stdio.h>
	int fact(int n)
	{
		int i,f=1;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	return f;
	}
	int main()
	{
		int n,ft;
		printf("\nEnter the number to find the factorial:");
		scanf("%d",&n);
		ft=fact(n);
		printf("Factorial of a the given number=%d",ft);
		return 0;
	}
	
