#include <math.h>
#include <stdio.h>


double main(){
  double s,t,t1,s1;
  printf("insert a value: ");
  scanf("%lf %lf %lf %lf", &s, &t, &s1, &t1);

  double v = s-s1/t-t1;


  printf("acceleration = %.2lf",v);

  return main();
  return 0;
}
