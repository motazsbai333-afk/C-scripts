#include <stdio.h>
main()
{
int x;
int y;
int i;
y=0;
do{
printf("donner x=");
scanf("%i",&x);
}
while (x<0);
for(i=1;i<x;i++){
	if (x%i==0)
	y=y+i;
}
if (x==y)
printf("parfait");
else
printf("imparfait");
}
