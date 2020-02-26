#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    double n , m ,A ,B ,C ,D;
    scanf("%f",&n);
    scanf("%f",&m);
     srand(time(NULL));
     double X = rand() / (double)RAND_MAX;
     double Y = rand() / (double)RAND_MAX;
     double Z = rand() / (double)RAND_MAX;
     double K = rand() / (double)RAND_MAX;
     A=X*(m-n)+n;
     B=Y*(m-n)+n;
     C=Z*(m-n)+n;
     D=K*(m-n)+n;
printf("%f %f %f %f\n", A, B ,C ,D);
}
