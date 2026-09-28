#include <stdio.h>
main()
{
int max;
int n;
int i;
do{
printf("donner n");
scanf("%i",&n);
}
while ((1>n) or (n>9));
do{
printf("donner max");
scanf("%i",&max);
}
while ((10>max) or (max>99));
for(i=1;i<=max;i++){
	if (i%4==0 or i%10==4 or i/10==4)
	printf("*");
	else
	printf("%i",i);
}
}
