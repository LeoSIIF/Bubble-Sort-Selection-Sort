#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include <string.h>
int comp=0;
//------------------------------------
int minIndex(char v[], int i, int n){
	int j, imenor = i;
	for(j=i+1;j<n;j++)
		if(v[j]<v[imenor])
			imenor=j;
	return imenor;		
}

void ssort(char v[], int n){
	int i, indiceMenor;
	for(i=0;i<n-1;i++){
		indiceMenor = minIndex(v,i,n);
		troca(&v[i], &v[indiceMenor]);
	}
}


int main(){
	char *vet;
	int n,i;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("Digite o caractere: ");
		fflush(stdin);
		scanf("%c",&vet[i]);
	}
	printVetor(vet,n);
	ssort(vet,n);
	printf("Vetor Ordenado\n");
	printVetor(vet,n);
	return 0;
}// fim main
