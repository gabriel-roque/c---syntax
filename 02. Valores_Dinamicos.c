//Ex 02: O usuario inseri os valores
// Gabriel Roque de Miranda Silva 3 Semestre
#include <stdio.h>

int main(){

	int n1 = 0;
	int n2 = 0;

	float nota1 = 0;
	float nota2 = 0;

	printf("O 1 valor: ");
		scanf("%d", &n1);

	printf("O 2 valor: ");
		scanf("%d", &n2);

	printf("A 1 nota: ");
		scanf("%f", &nota1);

	printf("A 2 nota: ");
		scanf("%f", &nota2 );

//Exibir ao USER
	printf("\n");
	printf("======================= \n");
	printf("1 valor: %d\n", n1);
	printf("2 valor: %d\n", n2);
	printf("1 nota: %.1f\n", nota1);
	printf("2 nota: %.1f\n", nota2);


}
