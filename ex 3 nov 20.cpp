#include <stdio.h>
int premier(int i){
	int j,nb;
	for(j=1;j<=i;j++){
		if (i%j==0) nb++;
	}
	return  (nb);
}

main(){
	float s;
	int i,n;
	printf("donner n: ");
	scanf("%i",&n);
	for(i=2;i<=n;i++){
		if (premier(i)==2)
		printf("%i",i);
	}
	
	s=0;
	
	if (premier(n)==2){
		for(i=1;i<=n;i++){
			s=s+(1/i);
		}
		
		printf("la somme harmonique est %f",s);
		
		}
	
}

