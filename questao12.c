//O uso de ponteiro para funções, serve para apontar qual função deve ser chamada no trecho do código, sem a necessidade de escrever o nome da função explicitamente.

#include <stdio.h>

int fatorial (int x){
	
    int fato=1;	

    for(int i=x; i>0; i--){
    	fato = fato * i; 
    }
    
    return fato;
}

int main()
{
    int a, b;
    int (*ponteiro_funcao)(int);

    printf("Informe o numero inteiro para saber seu fatorial: ");
    scanf("%d ", &a);

    ponteiro_funcao = fatorial;
    b=ponteiro_funcao(a);

    printf("O resultado do fatorial é: %d", b);

    return 0;
}
