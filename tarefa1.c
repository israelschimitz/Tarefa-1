#include <stdio.h>

int vector [20];
int i=0;
int j=0;
int aux=0;

void main () {
		
	system("clear");
	leitura_dados ();
        
	printf("Valores digitados:\n");
	imprime_valores ();

	ordena_crescente ();

	printf("Valores em ordem crecente:\n");
	imprime_valores ();

}

int imprime_valores () {
	for (j=0;j<20;j++) {
                printf("%d""\n",vector[j]);
        }
        j=0;
	return 0;
}

int leitura_dados () {
	printf("Digite os vinte valores:\n");
	for (i=0;i<20;i++) {
                scanf("%d",&vector[i]);
        }
        i=0;
	return 0;
}

int ordena_crescente () {
	for (i=0;i<20;i++) {
                for (j=1;j<20;j++) {
                        if (vector[j] < vector[j-1]) {
                                aux=vector[j];
                                vector[j]=vector[j-1];
                                vector[j-1]=aux;
                        }
                }
        }
	return 0;
}

