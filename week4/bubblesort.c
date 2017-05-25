#include<stdio.h>
int main()
{
	int a[50],i,c,p,n,temp;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(p=1;p<n;p++)
		{
			for(c=0;c<n-p;c++)
			{
				if(a[c]>a[c+1])
				{
					temp=a[c];
					a[c]=a[c+1];
					a[c+1]=temp;
				}
			}
		}
	printf("\nElements after sorting:");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	return 0;	
}

