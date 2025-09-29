#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
float a,b,s,p;
char o;
printf("Enter the first integer\n");
scanf("%f", &a);
printf("Enter the second integer (Not necessary in case of square root)\n");
scanf("%f", &b);
printf ("Enter the operator\n");
scanf(" %c",&o);
s = sqrt(a); 
p = pow(a,b);
if(o=='+') goto addition;
if(o=='-') goto subtraction;
if(o=='*') goto multiplication;
if(o=='/') goto division;
if(o=='s') goto sqrt;
if(o=='p') goto power;

addition:
printf("%f+%f=%f", a,b,a+b);exit(0);
subtraction:
printf("%f-%f=%f", a,b,a-b);exit(0);
multiplication:
printf("%f*%f=%f", a,b,a*b);exit(0);
division:
printf("%f/%f=%f", a,b,a/b);exit(0);
sqrt:
printf("√%f = %f", a,s);exit(0);
power:
printf("%f ^ %f = %f",a,b,p );exit(0);

return 0;
}