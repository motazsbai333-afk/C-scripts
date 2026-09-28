#include <stdio.h>
int main(){
	int x,y,z;
	int *p1,*p2;
	x=5;
	y=20;
	z=50;
	/**/
	printf("\nles resultat:");
	p1=&x;p2=&z;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	printf("\nles resultat:");
	*p1=*p2+2;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	printf("\nles resultat:");
	p1=p2;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	printf("\nles resultat:");
	p2=&y;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	printf("\nles resultat:");
	*p1*=*p2;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	
	printf("\nles resultat:");
	*p2=--(*p1);
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	
	printf("\nles resultat:");
	*p1-=y;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	
	printf("\nles resultat:");
	x=++(*p2)+*p1;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	
	printf("\nles resultat:");
	p1=&x;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	
	printf("\nles resultat:");
	z=--x+*p2++;
	printf("%i    %i    %i	  %i		",*p1,x,y,z);
	printf("%i",*p2);
	/**/
	return (0);
}
