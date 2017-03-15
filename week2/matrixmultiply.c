#include<stdio.h>
void read_matrix(int m, int n, int a[m][n])
{
 	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++)
		{
			printf("mat[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void print_matrix(int m,int n, int a[m][n])
{
	for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}
 }

void multiply_matrix(int m, int n, int a[m][n], int b[m][n], int c[m][n])
{
int i,j,k,sum;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	sum=0;
	for(k=0;k<n;k++)
	{
	sum=sum+(a[i][k]*b[k][j]);
	}
c[i][j]=sum;
}
}
}

void main()
{
int x,y,z,m,n;
printf("\nEnter the order of matrix:");
scanf("%d%d",&m,&n);
int a[m][n],b[m][n],c[m][n];
read_matrix(m,n,a);
read_matrix(m,n,b);
multiply_matrix(m,n,a,b,c);
print_matrix(m,n,c);
}






