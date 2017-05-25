#include<stdio.h>
#include<string.h>
int main()
{
	char s[20][20],search[20],temp[20];
	int n,i,p,c,first,last,mid,res;
	printf("Enter the number of strings:");
	scanf("%d",&n);
	printf("\nEnter the strings:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(p=1;p<n;p++)
		{
			for(c=0;c<n-p;c++)
			{
				if(strcmp(s[c],s[c+1])>0)
				{
					strcpy(temp,s[c]);
					strcpy(s[c],s[c+1]);
					strcpy(s[c+1],temp);
				}
			}
		}
	printf("\nThe sorted order of the strings is:");
	for(i=0;i<n;i++)
	{
		printf("%s\t",s[i]);
	}	
	printf("\nEnter the string to be searched:");
	scanf("%s",search);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		res=strcmp(s[mid],search);
		if(res==0)
		{
			printf("\nString found at %d position\n\n",mid+1);
			return 0;
		}
		else if(res>0)
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	printf("\n String not found");
	return 0;
}
