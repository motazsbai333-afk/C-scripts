# include <stdio.h>
main()


     
{
int x,r;
int v;
printf("donnder un entier ");
scanf("%i",&x);
v=1;
r=x%10;
while((x>0) and (v==1)){
if(x%10<r) v=0;
else{
 r=x%10;
 x=x/10;    }
 

}
printf("%i",v);

}

