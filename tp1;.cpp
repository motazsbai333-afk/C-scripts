#include <stdio.h>
main(){
	int n;
	printf("donner une valeur");
	scanf("%i",&n);
	int c;
	c=n%10;
	int d;
	d=(n/10)%10;
	int b;
	b=(n/100)%10;
	if ((c*c*c+d*d*d+b*b*b)==n)
	printf("le nombre est cubic");
	else
	printf("le nombre n'est pas cubic");
}