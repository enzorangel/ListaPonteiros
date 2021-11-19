#include <iostream>

using namespace std;

void multiplicar(int A[][100], int B[][100], int C[][100], int linha1, int coluna1, int coluna2){
    
    for(int i=0; i<linha1; i++){
        for(int j=0; j<coluna2; j++){
            for(int k=0; k<coluna1; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

void preencher(int matriz[][100], int linha, int coluna){
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            cin >> matriz[i][j];
        }
    }
}

int main(){
    
    int linha1, coluna1, coluna2;
    
    cin >> linha1 >> coluna1 >> coluna2;
    
    int A[linha1][100], B[coluna1][100], C[linha1][100];

    preencher(A,linha1,coluna1);
    preencher(B,coluna1,coluna2);

    multiplicar(A,B,C,linha1,coluna1,coluna2);

    for(int i=0; i<linha1; i++){
        for(int j=0; j<coluna2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
