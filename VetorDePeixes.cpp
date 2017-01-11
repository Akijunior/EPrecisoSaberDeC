
#include <stdio.h>
#include <stdlib.h>
#include <string>
struct aluno {
	
	int mat;
	float nota;
	char nome[30];
}; typedef struct aluno peixe;

int main() {
	
	peixe vet_peixes[3];
	int i = 0;
	while(i < 3) {
		
		printf("Digite a matricula: ");
		scanf("%d", &vet_peixes[i].mat);
		
		printf("Digite a nota: ");
		scanf("%f", &vet_peixes[i].nota);
		
		printf("Digite o nome: ");
		scanf("%s", vet_peixes[i].nome);
		
		i += 1;
		
	}
	
	for(int j = 0; j < 3; j++){
		
		printf("Matricula: %d.\n", vet_peixes[j].mat);
		printf("Nome: %s.\n", vet_peixes[j].nome);
		printf("Nota: %.2f.\n\n", vet_peixes[j].nota);
		
	}
	
	return 0;
}
