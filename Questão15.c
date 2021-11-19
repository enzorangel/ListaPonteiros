#include <stdio.h>
#include <stdlib.h>

//o código da questão 13 já tem uma função que organiza como se fosse qsort

//funcao que vai ordenar
void ordenar(float vetorX[], int n){
	
    //pega os dados
    for(int i = 0; i < n; i++){
       printf("Digite um valor: ");
       scanf("%f", &vetorX[i]);
    }
	
    int condicao = 0;
    float aux;

    //ordena usando a ideia do método bolha, visto na disciplina de LIP
    do{

        condicao = 0;

        for(int i = 0; i < (n-1); i++){
            for(int j = i+1; j < n; j++){
                if(vetorX[j] < vetorX[i]){
                    condicao = 1;
                    aux = vetorX[i];
                    vetorX[i] = vetorX[j];
                    vetorX[j] = aux;
                }
            }
        }
    }while(condicao == 1);
	
    //mostra na tela como ficou o vetor
    for(int i = 0; i < n; i++){
       printf("\n %f", vetorX[i]);
    }



}

int main() {
	
    float *vetor;
    int n;

    printf("Número de termos: ");
	
    //pega a quantidade de elementos
    scanf("%d", &n);

    //alocação dinâmica
    vetor = malloc(n*sizeof(float));
    ordenar(vetor, n);

    //libera a memória alocada
    free(vetor);

}

