#include <stdio.h> 
include <conio.h> 
#include< math.h>
void quardratic(int a,int b,int c); 
void main()
        {
        float a,b,c;
        clrscr();
        printf("ENTER the coefficients of x2,x and constant\n");
        scanf("%f%f%f",&a,&b,&c);
        quardratic(a,b,c);
        getch();
        } 
        void quardratic(int a,int b,int c)
        {
        float D,r1,r2,m,s;
        D=(b*b-4*a*c);
        if(D>0)
                {
                printf("the roots are real and distinct");
                r1=((-b+pow(D,0.5))/2*a);
                r2=((-b-pow(D,0.5))/2*a);
                printf("The roots are %f %f",r1,r2);
                } 
        else if(D==0)
                {
                  printf("The roots are real and equal \n");
                  r1=(-b/(2*a));
                  r2=r1;
                  printf("the roots are %f,%f",r1,r2);
                } 
                else
                {
                 D=-D;
                 printf("the roots are imaginary");
                 m=(-b/(2*a));
                 s=(pow(D,.5)/(2*a));
                 printf("the roots are %f+i%f and %f-i%f",m,s,m,s);
                } 
        }
