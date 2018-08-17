#include <stdio.h>
#include <stdlib.h>

// global var -- funcao soma
int soma(int a, int b){
  int r = 0; //necessario um variavel para alocar o retorno
  r = a+b;
  return r;
}

// func principal
int main(){
  int Somafinal = 0; //necessario do mesmo tipo
  Somafinal = soma(25,26);
  printf("%d", Somafinal);

}
