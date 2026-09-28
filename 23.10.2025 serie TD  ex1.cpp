#include <stdio.h>
main()
{
	int x,n,nb;
	do{
		printf("donner x");
		scanf("%i",&x);
		
		
	} while((x<0)or(x>9));
	printf("donner n");
	scanf("%i",&n);
	nb=0;
	while (n!=0){
		if(n%10==x) nb++;
		n=n/10;
		
	}
	printf("%i",nb);
}
