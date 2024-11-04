#include "stdio.h"
#include "stdlib.h"
#include "math.h"
 
double main(){
    double operatore,operatore1
    char car;
    printf("enter a operator ");
    scanf("%c",&car);
    if(car = "/"){
        double division();
    }
    else if(car = "-"){
        double minus();
    }
    else if(car = "+"){
        double sum();
    }
    else if(car = "*"){
        double moltiplication();
    }
    else if(car = "r"){
        double extra();
    }
    else{
        printf("non valid charachter");
    }

    return main();
    return 0;
}



double division(){
    double operatore,operatore1
    printf("enter the first and the second number");
    scanf("%lf %lf", &operatore, &operatore1);
    division = operatore/operatore1;
    printf("division = %.2lf", division);

}

double minus(){
    double operatore,operatore1
    printf("enter the first and the second number");
    scanf("%lf %lf", &operatore, &operatore1);
    minus = operatore-operatore1;
    printf("minus = %.2lf", minus);

}

double sum(){
    double operatore,operatore1
    printf("enter the first and the second number");
    scanf("%lf %lf", &operatore, &operatore1);
    sum = operatore+operatore1;
    printf("sum = %.2lf", sum);

}

double moltiplication(){
    double operatore,operatore1
    printf("enter the first and the second number");
    scanf("%lf %lf", &operatore, &operatore1);
    moltiplication = operatore*operatore1;
    printf("moltiplication = %.2lf", moltiplication);

}

double extra(){
    double operatore,operatore1
    printf("enter the first and the second number");
    scanf("%lf %lf", &operatore, &operatore1);
    extra = operatore%operatore1;
    printf("extra = %.2lf", extra);

}

