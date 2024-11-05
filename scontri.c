#include "math.h"
#include "stdio.h"

double main(){
    double v,v1,m,m1;
    printf("insert four vaule: ");
    scanf("%lf %lf %lf %lf", &v,&m,&v1,&m1);
    double vf = v*m -(v1*m1)/m+m1;
    printf("vf = %.2lf",vf);

    return main();
    return 0;
}