
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

double main (){
// dichiarazione variabili
double a, b, c, delta,risultato,risultato1;

printf("inserisci i valori dell'equazione (ctrl-c per uscire):\n ");
// qui c'è l'input
scanf("%lf", &a);
scanf("%lf",&b);
scanf("%lf", &c);

//se b = 0 allora esegue questa parte di codice 
if(b==0){
    risultato = (a = -c/a);
    printf("risultato = %.2lf\n", risultato);
}

delta = b * b - 4 * a * c;
//se il delta è maggiore di 0, programma risolve l'equazione e scrive a schermo il risultato
if(delta > 0 ){
    risultato1 = (-b - sqrt(delta)) / (2 * a);
    risultato = (-b + sqrt(delta)) / (2 * a);
    printf("risultato1 = %.2lf and risultato = %.2lf\n", risultato, risultato1);    
}

//se il delta = 0, le soluzioni sono coincidenti
else if (delta == 0){
    risultato1 = risultato = -b / (2 * a);
    printf("risultato1 = risultato = %.2lf\n", risultato1);
}


return main();
return 0;

}
