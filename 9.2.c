//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
#include <stdio.h>
int main(){
int a;
printf("enter percentage of student= ");
scanf("%d", &a);
if (a>=90 && a<=100)
printf("grade= A\n");
else if (a>=80 && a<=89)
printf("grade= B\n");
else if (a>=70 && a<=79)
printf("grade= C\n");
else if (a>=60 && a<=69)
printf("grade= D\n");
else
printf("grade= F\n");
return 0;
} 