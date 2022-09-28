#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
long long comp=0;
void bsort(int v[], int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			comp++; //
			if(v[j]<v[j+1]){
				trocaInt(&v[j],&v[j+1]);
			}
		}
	}
}

//-----------------------------------
int main(){
	int *vet, n,i;
	float ini,fim, tempo;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);
	geraVet(vet,n);
	printIntVetor(vet,n);
	bsort(vet,n);
	printIntVetor(vet,n);
	return 0;
}
