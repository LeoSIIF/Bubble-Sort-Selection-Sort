#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocaInt(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}// fim troca
//----------------------
void geraVet(int v[], int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	   v[i]=rand()%50;
}// fim geraV
//-----------------------------
void printVetor(char v[],int n){
	int i;
	for(i=0;i<n;i++)
	  printf("%c |",v[i]);
	printf("\n");  
}// fim printVetor

void printIntVetor(int v[],int n){
	int i;
	for(i=0;i<n;i++)
	  printf("%d |",v[i]);
	printf("\n");  
}// fim printVetor




