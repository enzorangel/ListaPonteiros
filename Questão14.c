#include <stdio.h>
#include <stdlib.h>

//compara os valores
int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

//ordena com a função qsort
void ordenar(float vetorX[], int n){
 
    //pega dados do usuário
    for(int i = 0; i < n; i++){
       printf("Digite um valor: ");
       scanf("%f", &vetorX[i]);
    }
	
     //passa como parâmetro o vetor, o número de elementos, o sizeof sendo float
     //e a função "comparador" que compara 2 elementos
     qsort(vetorX, n, sizeof(float), comparador);
 
    //mostra na tela a ordenação
    for(int i = 0; i < n; i++){
       printf("\n %f", vetorX[i]);
    }



}

int main() {
    
    //ponteiro
    float *vetor;
    //nº de elementos
    int n;
    
    //pede o nº de termos
    printf("Número de termos: ");
    
    //salva no endereço de n
    scanf("%d", &n);

    //alocação dinâmica
    vetor = malloc(n*sizeof(float));

    //chama a função ordenar e passa como parâmetro o vetor e n
    ordenar(vetor, n);

    //libera a memória que foi alocada
    free(vetor);

}

