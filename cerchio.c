#include "stdio.h"
#include "math.h"
#define PI 3.14

double raggio(){
    char chr;
    double r, d, c
    printf("enter r,for for the radius, d for the diameter,and c for the circumference: " );
    scanf("%c",&chr);
    if (chr = 'r'){
        printf("insert a value");
        scanf("%lf", &r);
        double area = PI*r*r;
        printf("area = %.2lf",area);
    
    }
    else if(chr = 'd'){
        printf("insert a value");
        scanf("%lf", &d);
        double rd = d/2
        double area = PI*rd*rd;
        printf("area = %.2lf", area);
        
    }
    else if (chr = 'c'){
        printf("insert a value");
        scanf("%lf", &c);
        double rc = c/2*PI 
        double area = PI*rc*rc;
        printf("area = %.2lf",area);
    }
    else{
        printf("invalid operator");
    }

    return raggio();
    return 0;

}