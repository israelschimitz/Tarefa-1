#include <stdio.h>
#include <math.h>

int vector [20];
int i=0;
int j=0;
int aux=0;

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
        i=0;
        j=0;
        return 0;
}

float calcula_media (int x[]) {
        int aux1=0;
        float m=0;
        for (i=0;i<20;i++) {
                aux1 = aux1+x[i];
        }
        i=0;
        m=aux1/20;
        return (m);
}

float calcula_dsvpd (int x[], float y) {
	float m=0;
	float n=0;

	for (i=0;i<20;i++) {
		n=n+pow((x[i]-y),2);
	}
	i=0;
	m=sqrt(n/19);
	return (m);	
}	

void main () {
        float media=0;
        float dsvpd=0;

        system("clear");
        leitura_dados ();

        printf("Valores digitados:\n");
        imprime_valores ();

        ordena_crescente ();

        printf("Valores em ordem crecente:\n");
        imprime_valores ();

        media = calcula_media(vector);
        printf("A média é: %f\n", media);

	dsvpd = calcula_dsvpd (vector,media);
	printf("O desvio padrão é: %f\n", dsvpd);

}


