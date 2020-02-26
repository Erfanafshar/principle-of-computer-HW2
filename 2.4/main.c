#include <stdio.h>
#include<math.h>
#define pi 3.14
int main(){
float zel , masahat , mohit , ghotr , masahat_daiere_mohati , mohit_daiere_mohiti;
scanf("%f",&zel);
masahat=zel*zel;
mohit=zel*4;
ghotr=zel*sqrt(2);
masahat_daiere_mohati=pi*(zel/2)*(zel/2);
mohit_daiere_mohiti=pi*(zel*sqrt(2));
printf ("Perimeter: %f\nArea: %f\nDiameter: %f\nInsideCircle: %f\n",masahat,mohit,ghotr,masahat_daiere_mohati);
printf ("outsideCircle: %f",mohit_daiere_mohiti);
return 0;
}
