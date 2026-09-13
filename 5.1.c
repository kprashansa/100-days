//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
# include <stdio.h>
# include <math.h>
 int main (){
    float P,R,T,SI,CI;
   printf("enter the value of P:");
   scanf("%f",&P);
   printf("enter the value of R:");
   scanf("%f",&R);
   printf("enter the value of T:");
   scanf("%f",&T);
   SI= (P*R*T)/100;
   CI = P * pow((1 + R / 100.0), T) - P;
   printf("simple intrest is %f ",SI);
   printf("COMPOUND intrest is %f ",CI);
return 0;
}