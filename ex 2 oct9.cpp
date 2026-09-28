#include <stdio.h>
main(){
	int i,n,m;
	int t1[n],t2[*];
	do{
	printf("donner la dimension du tableau t1");
	scanf("%i",&n);
	}while (n<1);
	do{
	printf("donner la dimension du tableau t2");
	scanf("%i",&m);
	}while (m<1);
	
	for (i=1;i<n;i++)
	
}
int cubic(int x)
{
	int c;
	c=x%10;
	int d;
	d=(x/10)%10;
	int b;
	b=(x/100)%10;
	if ((c*c*c+d*d*d+b*b*b)==x)
	return (1);
	else
	return(0);
}
