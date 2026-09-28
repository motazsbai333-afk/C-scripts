#include <stdio.h>
main ()
{
	int i,n;
	int A[n],b[i];
	do{
	printf("donner la dimension du tableau ");
	scanf("%i",&n);
	}while ((n%2!=0)&&(n%3!=0)&&(n>100)&&(n<5));
	for (i=1;i<=n;i++)
	{
		do{
		
		printf("donner l'element n %i",i);
		scanf("%i",&A[i]);
	}while(A[i]<0);
	
	}
	printf("les elements du tableau sont");
	for (i=1;i<=n;i++)
	{
	
	printf("%i\n",A[i]);
}
for(i=1;i<=n;i++){
	do{
	printf("donner l'element n %i");
	scanf("%i",&b[i]);
	}while ((n%2!=0)&&(n%3!=0)&&(n>100)&&(n<5));
}
}
