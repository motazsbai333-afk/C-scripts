#include <stdio.h>
int fact(int n){
	if ((n==0) or (n==1)) return 1;
	else{
		return (n*fact(n-1));
		printf("%i",n);
	}
}
main(){
	int s,n;
	printf("n=");
	scanf("%i",&n);
	s=fact(n);
	printf("%i", s);
}
