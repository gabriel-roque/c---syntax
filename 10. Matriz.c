#include <stdio.h>

int main() {

int mat [4][4];
int l = 0;
int c = 0;

for(l = 0; l < 4; l++){
  for(c = 0; c < 4; c++){
    printf("Linha %d coluna %d: ", l, c);
    scanf("%d", &mat[l][c]);



  }
}


printf("\n================\n");

for(l = 0; l < 4; l++){
  for(c = 0; c < 4; c++){
    printf("%d ", mat[l][c]);

  }
  printf("\n");
}










}
