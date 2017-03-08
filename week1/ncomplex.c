#include<stdio.h>
struct complex
{
float real;
float imag;
};
struct complex add(struct complex x, struct complex y);
struct complex getncomplex()
{
struct complex c,n1,n2;
int n;
printf("Enter the Number of Complex Numbers to be added \n");
scanf("%d",&n);
n1.real=0.0;
n1.imag=0.0;
c=n1;
for(int i=1;i<=n;i++)
{
printf("Enter the real and imaginary part respectively:\n");
scanf("%f %f", &n2.real, &n2.imag);
c = add(c, n2);
}
return c;
}
struct complex add(struct complex x, struct complex y)
{
struct complex c;
c.real=x.real+y.real;
c.imag=x.imag+y.imag;
return c;
}
void printcomplex(struct complex c)
{
printf("Sum = %.1f + %.1fi", c.real, c.imag);
}
int main()
{
struct complex c;
c=getncomplex();
printcomplex(c);
} 
