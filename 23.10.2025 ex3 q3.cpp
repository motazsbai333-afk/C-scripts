#include <stdio.h>
main(){
	int choix;
	int x=0;
	do{
		printf("choix=");scanf("%i",&choix);
		switch(choix){
			   case 1: x++; break;
			   case 2: x*=2; break;
			   case 3: x-=4; break;}
			   
		} while(choix!=4);
		printf("la valeur finale de x vaut :%i",x);
	
}
