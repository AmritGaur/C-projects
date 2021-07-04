#include <stdio.h> /* temperature conversion table of fahrenheit to centigrade */
main ()
/* Declaration of variables */
{int centigrade, Fahr;
int lower, upper, step;
lower = 0; /* lower limit of Fahrenheit temp */
upper = 300; /* upper limit of Fahrenheit temp */
step = 20;  /* diff. b/w two consecutive Fahrenhei temperatures */
Fahr = lower;  /* initial Far. temp.= lower limit */
while(Fahr <= upper)
{
    centigrade=5*(Fahr-32)/9;
    printf("%3d,%6d\n", Fahr,centigrade);
    Fahr= Fahr+step;
}
}
