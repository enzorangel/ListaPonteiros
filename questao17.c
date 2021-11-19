#include <stdio.h>

void mostrar(int a[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("%d ",a[i]);
    }
}

void soma(int a[],int b[], int c[], int tamanho){
    for(int i=0; i<tamanho; i++){
        c[i] = a[i]+b[i];
    }
}

void preencher(int a[],int tamanho){
    for(int i=0; i<tamanho; i++){
        scanf("%d",&a[i]);
    }
}

int main(){
    
    int tamanho;
    
    scanf("%d",&tamanho);
    
    int a[tamanho], b[tamanho], c[tamanho];
    preencher(a,tamanho);
    preencher(b,tamanho);
    
    soma(a,b,c,tamanho);
    
    mostrar(c,tamanho);

    return 0;
}
