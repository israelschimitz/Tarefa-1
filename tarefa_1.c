/**
 *
 *@author Israel Schimitz
 *@date 23/04/2013
 *@brief Tabalho I - Sistemas Embarcados UCS
 *@details Deverá ler um vetor de 20 caracteres, ordenar crescentemente, calcular a média, o desvio padrão e a variância
 *
 *@version 1.0
 */


#include <stdio.h>
#include <math.h>

int i=0; ///Variável do tipo inteiro para rodar os laços "for"
int j=0; ///Variável do tipo inteiro para rodar os laços "for"

/**
 *@brief Função para imprimir em tela os valores de um vetor do tipo "inteiro"
 *@param x Vetor com os dados de entrada que serão manipulados
 *@return Retorna 0 se ocorrer tudo certo
 */

int imprime_valores (int x[]) {
        for (j=0;j<20;j++) {
                printf("%d""\n",x[j]);
        }
        j=0;
        return 0;
}

/**
 *@brief Função para inserir dados no vetor x (tipo inteiro) a partir do teclado
 *@param x Vetor com os dados de entrada que serão manipulados
 *@return Retorna 0 se ocorrer tudo certo
 */

int leitura_dados (int x[]) {
        printf("Digite os vinte valores:\n");
        for (i=0;i<20;i++) {
                scanf("%d",&x[i]);
        }
        i=0;
        return 0;
}

/**
 *@brief Função que ordena de forma crescente os dados de um vetor do tipo "inteiro" 
 *@param x Vetor com os dados de entrada que serão manipulados
 *@return Retorna 0 se ocorrer tudo certo
 */

int ordena_crescente (int x[]) {
	int aux=0;
        for (i=0;i<20;i++) {
                for (j=1;j<20;j++) {
                        if (x[j] < x[j-1]) {
                                aux=x[j];
                                x[j]=x[j-1];
                                x[j-1]=aux;
                        }
                } 


        }
        i=0;
        j=0;
        return 0;
}

/**
 *@brief Função que calcula a média entre os valores de um vetor do tipo "inteiro"
 *@param x Vetor com os dados de entrada que serão manipulados
 *@return Retorna o valor da média entre os valores do vetor x
 */

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

/**
 *@brief Função que calcula o desvio padrão entre os valores de um vetor (inteiro) e a média (float), previamente calculada
 *@param x Vetor com os dados de entrada que serão manipulados
 *@param y Valor com o valor da média (tipo - float)
 *@return Retorna o valor do desvio padrão entre os dados do vetor "x" e a média "y"
 */

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

/**
 *@brief Função que calcula a variância de um desvio padrão préviamente calculado
 *@param x Entrada - valor do Desvio padrão
 *@return Retorna o valor da variancia do desvio padrão x
 */

float calcula_variancia (float x) {
	float m=0;
	m=pow(x,2);
	return (m);
}


/**
 *@brief Função principal do sistema 
 *@return Retorna 0 se tudo ocorrer de acordo
 */

int main () {
	int vector [20];
        float media=0;
        float dsvpd=0;
	float var=0;
	
	system("clear");	
        leitura_dados (vector);

        printf("Valores digitados:\n");
        imprime_valores (vector);

        ordena_crescente (vector);

        printf("Valores em ordem crecente:\n");
        imprime_valores (vector);

        media = calcula_media(vector);
        printf("A média é: %f\n", media);

	dsvpd = calcula_dsvpd (vector,media);
	printf("O desvio padrão é: %f\n", dsvpd);
	
	var = calcula_variancia (dsvpd);
	printf("A variância é: %f\n", var);
}
