#include<stdio.h>
typedef struct complex

{
	float real;
	float imaginary;
};


complex getcomplex()
{
	complex c;
	printf("\nenter real and imaginary part of the complex number :");
	scanf("%f%f",&c.real,&c.imag);
	return c;
}


complex add(complex x,complex y)
{
	complex c;
	c.real=x.real+y.real;
	c.imag=x.imag+y.imag;
	return c;
}

int main()
{
	complex p;
	complex q;
	complex r;
	p=getcomplex();
	q=getcomplex();
	c=add(p,q);
	printcomplex(r);
}




