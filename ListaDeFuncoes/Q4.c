/*
Crie um programa que tenha uma função ler 3 Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno
*/
#include <stdio.h>
#include <locale.h>
#define VETOR 3

int lernumero (); // protótipo da função

int main(){ 
    setlocale(LC_ALL, "portuguese"); //para poder usar acentuação
    
	int vet[3];
    int i;

	lernumero(vet, 3);
	
    for(i=0; i<=2; i++){ //índice
    	printf("o número inserido foi: %d\n",vet[i]);
    }
    return 0;
  
}
//implementando a função
int lernumero(int vet[]){
    int i;

    for(i=0; i<=2; i++ ){
        printf("insira o número na posição %d: \n",i);
        scanf("%d",&vet[i]);	
    }
return (vet[i]);

}




