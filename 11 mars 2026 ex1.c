#include <stdio.h>
	struct person{
		char cin[8];
		char nom [10];
		char prenom [10];
		char ville [10];
		
	};
	struct date{
		int j;
		int m;
		int a;
	};
	struct contrat{
		char ref[10];
		struct person prop;
		struct person loc;
		struct date date_d;
		int montant;
	};
	int n;
	contrat t[10];
void remp(struct contrat t, int n){
	for(int i=1;i<=n;i++){
		printf("ref=");
		scanf("%i",&t[i].ref);
		/**/
		printf("cin=");
		scanf("%s",&t[i].prop.cin);
		printf("nom=");
		scanf("%s",&t[i].prop.nom);
		printf("prenom=");
		scanf("%s",&t[i].prop.prenom);
		printf("ville=");
		scanf("%s",&t[i].prop.ville);
		/**/
		scanf("%s",&t[i].loc.cin);
		printf("nom=");
		scanf("%s",&t[i].loc.nom);
		printf("prenom=");
		scanf("%s",&t[i].loc.prenom);
		printf("ville=");
		scanf("%s",&t[i].loc.ville);
		/**/
		printf("jour=");
		scanf("%i",&t[i].date_d.j);
		printf("mois=");
		scanf("%i",&t[i].date_d.m);
		printf("annee=");
		scanf("%i",&t[i].date_d.a);
        /**/
        printf("montant=");
        scanf("%i",&t[i].montant);
	}
}
int calc(contrat t, int n){
	/*recursive*/
	if (t[n].prop.cin!="09853225") return(0);
	else return(t[n].montant + calc(t,n-1));
}
main(){
	int i;
	int s;
	remp(t,n);
	s=calc(t,n);
}
