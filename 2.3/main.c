#include <stdio.h>
#include <math.h>
int main (void){
float a, b , c , d , e , r1 , r2 ,r3 ,r4 ;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
scanf("%f",&e);
r1=(a/b)+((a*b)/(b*c))+((a*b*c)/(c*d*e));
r2=log(fabs(log10(fabs(a))+sin(b+c)));
r3=((a/b)/((a/b)+(b/c)+(c/d)))+(((a/b)+(b/c)+(c/d))/(a/b));
r4=pow(((1/pow(a,1.2))+(2/pow(b, 2.3))+(3/pow(c, 3.4))),4.5);
printf("Formula 1 result: %f\nFormula 2 result: %f\nFormula 3 result: %f\nFormula 4 result: %f",r1,r2,r3,r4);
return 0;
}
