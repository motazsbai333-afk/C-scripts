#include <stdio.h>
main(){
	int n;
	float s,i;
	printf("donner n="); scanf("%i",&n);
	for(i=2;i<=n;i++){
		s=s+(1/i);
	}
	printf("%f",s);
}
