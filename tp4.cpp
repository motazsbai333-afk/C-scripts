#include <stdio.h>
main(){
float p;
float t;
printf("donner le poids");
scanf("%f",&p);
if (p<=100)
t=5;
else
if (p==200)
t=10;
else
t=20;
printf("le tarif:%f",t);
}