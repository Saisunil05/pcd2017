#include<stdio.h>
#include<string.h>
int compute(int n,char s[n][80],char *key);
int main()
{
	int i,n,res;
	char s[n][80],key[80]; 
 	printf("enter the value of n"); 
	scanf("%d",&n); 
	printf("enter the elements");
	for(i=0;i<n;i++)
 	scanf("%s",s[i]); 
	printf("enter the value to search");
 	scanf("%s",key); 
	res=compute(n,s,key);
	printf("the position of %s=%d",key,res);
}
int compute(int n,char s[n][80],char *key)
{
	char low,high,mid;
	int temp;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		temp=strcmp(s[mid],key);
		if(temp==0)return mid;
		if(temp>0)return high=mid-1;
		if(temp<0)return low=mid+1;
	}
	return -1;
}
