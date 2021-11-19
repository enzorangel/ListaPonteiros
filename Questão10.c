// o char andou de 1 em 1 bytes - igual o enunciado
// int e float andou de 4 em 4 bytes - int não anda de 2 em 2 como no enunciado
// double andou de 8 em 8 bytes - igual o enunciado

//código usado
int main() {

  char a[4];
  int b[4];
  float c[4];
  double d[4];

    for(int i = 1; i <=3; i++){
      printf("char %d \n", a+i);
    }
    for(int i = 1; i <=3; i++){
      printf("int %d \n", b+i);
    }
    for(int i = 1; i <=3; i++){
      printf("float %d \n", c+i);
    }
    for(int i = 1; i <=3; i++){
      printf("double %d \n", d+i);
    }
}

