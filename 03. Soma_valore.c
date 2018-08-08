//Ex 03: Soma de valores
// Gabriel Roque de Miranda Silva 3 Semestre

#include <stdio.h>

int main(){

	int n1 = 0;
	int n2 = 0;
    int soma01 = 0;

	float nota1 = 0;
	float nota2 = 0;
    float soma02 = 0;

	printf("O 1 valor: ");
		scanf("%d", &n1);

	printf("O 2 valor: ");
		scanf("%d", &n2);
    	soma01 = (n1 + n2);

	printf("A 1 nota: ");
		scanf("%f", &nota1);

	printf("A 2 nota: ");
		scanf("%f", &nota2 );
    	soma02 = (nota1 + nota2);

//Exibir ao USER
	printf("\n");
	printf("======================= \n");

	printf("1 valor inserido: %d\n", n1);
	printf("2 valor inserido: %d\n", n2);
	printf("1 nota inserido: %.1f\n", nota1);
	printf("2 nota inserido: %.1f\n", nota2);
	printf("======================= \n");
//Exibi a soma
	printf("A soma entre %d e %d: %d\n", n1, n2, soma01);
  	printf("A soma entre %.2f e %.2f: %.2f\n", nota1, nota2, soma02);



}
