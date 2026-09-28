#include <stdio.h>
main(){
	int n,x,nb;
	do{
		printf("donner n: ");
		scanf("%i",&n);
	}
	while (n<2);
	while (n!=1){
		if (n%2==0){
			n=n/2;
			printf(" %i",n);
			nb=nb+1;
		}
		else{
			if(n%2!=0){
				n=3*n+1;
				printf(" %i",n);
				nb=nb+1;
			}
		}
	}
	printf("les nombres des iterations sont: %i",nb);
	
}

