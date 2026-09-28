#include <stdio.h>
int quoi(int n){
	if (n==0) return 0;
	else if(n%2==0){
		return ((1/n*n)+ quoi(n-1));
		printf("1/ %i",n);
	}
	else{
		return ((-1/n*n)+ quoi(n-1));
		printf("-1/ %i",n);
	}
}
main(){
	int n;
	float s;
	printf("n=");
	scanf("%i",&n);
	s=quoi(n);
	printf("%f", s);
} 
