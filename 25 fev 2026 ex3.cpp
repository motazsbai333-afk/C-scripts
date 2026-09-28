#include <stdio.h>
int div(int x, int y){
	if (x<y) return x;
	else return (div(x-y,y));
}
main(){
	int x,y;
	int s;
	printf("x=");
	scanf("%i",&x);
	printf("y=");
	scanf("%i",&y);
	s=div(x,y);
	printf("%i", s);
}
