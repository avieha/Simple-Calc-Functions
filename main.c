#include <stdio.h>
#include "myMath.h"

int main(){
double a = 0;
printf("Please insert a real number:");
scanf("%lf", &a);
float d = add((float)Exponent((int)a),(float)Power(a,3));
printf("The value of: f(x)=e^x+x^3-2 at the point %0.4lf is=%0.4f\n",a,sub(d,2));
float e = add((float)mul(a,3),(float)mul(Power(a,2),2));
printf("The value of: f(x)=3x+2x^2 at the point %0.4lf is=%0.4f\n" ,a,e);
float m = sub((float)div(mul(Power(a,3),4),5),(float)mul(a,2));
printf("The value of: f(x)=(4x^3)/5-2x at the point %0.4lf is=%0.4f\n",a,m);
return 0;
}
