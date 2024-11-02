#include "stdio.h"
#include "stdlib.h"
#include "math.h"

double main (){
double a, b, c, delta,risultato,risultato1;

printf("insert all the value for the equation(ctr-c for exit): ");
scanf("%lf %lf %lf", &a, &b, &c);

delta = b * b - 4 * a * c;

if(delta > 0 ){
    risultato1 = (-b - sqrt(delta)) / (2 * a);
    risultato = (-b + sqrt(delta)) / (2 * a);
    printf("risultato1 = %.2lf and risultato = %.2lf", risultato, risultato1);    
}

else if (delta == 0){
    risultato1 = risultato = -b / (2 * a);
    printf("risultato1 = risultato = %.2lf", risultato1);
}

else if(b=0){
    risultato = (a = -c/a);
    printf("risultato = %.2lf", risultato);
}

else if(c=0){
    delta = b * b - 4 * a;
    risultato1 = (-b - sqrt(delta))/(2*a);
    risultato = (-b + sqrt(delta))/(2*a);
    printf("risultato1 = %.2lf and risultato = %.2lf", risultato, risultato1);
}

return main();
return 0;

};

