#include <stdio.h>
int doub1(int b){
int c;
c=2*b++;
printf("b=%i\n",b);
return(c);
}
main(){
	int a=5;
	int z;
	z=doub1(a);
	printf("a=%d et z=%i\n",a,z);
	
	
}
