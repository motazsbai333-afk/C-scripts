#include <stdio.h>
struct etud{
	int mat;
	char nom[10];
	float moy;
	char fil[10];
	char niv[10];
	etud *suiv;
};
struct cell{
	etud e;
	
	cell *suiv;
};
cell *list;
cell insertete(etud x, cell E){
	q=(cell*)malloc(sizeof(cell));
	q->e=x;
	q->s=E;
	E=q;
	return(E);
	
}
cell saisie(){
	etud e;
	for(int i=1;i<=10;i++){
		printf("matricule");
		scanf("%i",&e.mat);
		printf("nom");
		scanf("%s",&e.nom);
		printf("moyenne");
		scanf("%f",&e.moy);
		printf("filiere");
		scanf("%s",&e.fil);
		printf("niveau");
		scanf("%s",&e.niv);
		e.suiv;
		E=insertete(e,E);
	}
	return E;
}
void affiche(cell E){
	cell p;
	int i=1;
	cell p=E;
	while(p!=null){
		printf("les info de etudiant",i," la matricule",p->e.mat," le niveau",p->e.niv," le moyenne",p->e.moy," le nom",p->e.nom," le filier",p->e.fil);
		p=p->suiv;
		
	}
	
}

main(){
	l=saisie();
	afficher(l);
}
