//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{double a,b,c,d,e,f;
printf("enter value of a b and c= ");
scanf("%lf%lf%lf",&a,&b,&c);
d=(b*b)-(4*a*c);
if (d>0)
{e=(-b+sqrt(d))/4*a*c;
f=(-b-sqrt(d))/4*a*c;
printf("roots are real and different= %lf %lf\n",e,f);}
else if (d==0)
{e=-b/4*a*c;
f=-b/4*a*c;
printf("root are real and same= %lf %lf\n",e,f);}
else
{printf("roots are complex\n");}
return 0;}