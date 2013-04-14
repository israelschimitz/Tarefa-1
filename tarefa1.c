#include <stdio.h>

int vector [20];

void main () {
		
	int i=0;
	int j=0;
	int aux=0;
	system("clear");
	printf("Digite os vinte valores:\n");

	for (i=0;i<20;i++) {
		scanf("%d",&vector[i]);
        }
	i=0;
        
	printf("Valores digitados:\n");
        for (j=0;j<20;j++) {
		printf("%d""\n",vector[j]);
        }
	j=0;
	for (i=0;i<20;i++) {
		for (j=1;j<20;j++) {
        		if (vector[j] < vector[j-1]) {
				aux=vector[j];
				vector[j]=vector[j-1];
				vector[j-1]=aux;
			}
		}
	}
        printf("Valores em ordem crecente:\n");
        for (j=0;j<20;j++) {
                printf("%d""\n",vector[j]);
        }
        
        j=0;

}
