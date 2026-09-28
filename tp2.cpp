#include <stdio.h>
main(){
	float a;
	char op[1];
	printf("donner un entier:");
	scanf("%f",&a);
	float b;
	printf("donner un entier:");
	scanf("%f",&b);
	
	printf("donner un operateur:");
	scanf("%c",&op);
	float r;
	switch(op){
		case '+':r=a+b;
		case '-':r=a-b;
		case '*':r=a*b;
		case '/':r=a/b; 
		default: printf("ce n'est pas un operateur");
	}
	printf("le resultat:",r);
	
}