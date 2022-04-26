/*
Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.
*/
#include<stdio.h> 
#include<locale.h>
#define VETOR 3

char ler3letras (); // proótipo da função

int main(){ //função principal
    setlocale(LC_ALL, "portuguese"); //para poder usar acentuação
    char vet[3];
    int i;

	ler3letras(vet, 3);
	
    for(i=0; i<3; i++){ //índice
    	printf("a letra inserida foi: %c\n",vet[i]);
    }
    return 0;
}
//implementando a função
char ler3letras (char vet[]){
    int i;

    for(i=0; i<3; i++ ){
        printf("insira uma letra na posição %d: \n",i);
        scanf("%c",&vet[i]);	
        fflush (stdin);
    }
return (vet[i]);

}