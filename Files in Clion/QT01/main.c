#include<stdio.h>

/*QUESTAO 1 - RODE O PROGRAMA E ANALISE AS FUNCOES CRIADAS, QUANTO AO SEU CUSTO COMPUTACIONAL.
    - QUAL O CUSTO COMPUTACIONAL, SEGUNDO A NOTACAO BIG O, DE CADA UMA DESSAS FUNCOES:
    FUNCAO 1: BIG(On3) {big O de n ao cubo}
    FUNCAO 2: BIG(On2) {big O de n ao quadrado}
    - QUANTAS VEZES, EM CADA UMA DA FUNCOES, O PRINTF APARECE NA TELA:
    FUNCAO 1: 1000
    FUNCAO 2: 60
*/


int n = 10;
int i, j, k;
int contador=1;



void funcao1(){
    printf("\n ====INICIO FUNCAO 1=====\n");

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            for(k=0;k<n;k++){
                printf("valor de i=%d, j=%d, k=%d contador=%d \n", i, j, k, contador);

                contador++;


            }
        }
    }
    printf("\n #### FIM FUNCAO 1 ####\n");
}

void funcao2(){

    printf("\n ===== INICIO FUNCAO 2 =====\n");
    contador=1;
    int parada=2;
    int w;
    for(w=0;w<parada;w++){

        for(i=0;i<n;i++){
            printf("valor de i=%d contador=%d \n", i, contador);
            contador++;
        }
        for(j=0;j<n;j++){
            printf("valor de j=%d contador=%d \n", j, contador);
            contador++;
        }
        for(k=0;k<n;k++){
            printf("valor de k=%d contador=%d \n", k, contador);
            contador++;
        }
    }
    printf("\n #### FIM FUNCAO 2####\n");
}

int main(){


    funcao1();
    funcao2();

    return 1;
}
