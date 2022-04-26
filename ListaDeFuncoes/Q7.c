/*
Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do
usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/
#include<stdio.h>
#include<string.h>

typedef struct{
    char p1 [30];
    char p2 [30];
    char p3 [30];
}lerpalavras; //definição da struct

 lerpalavras ler3Palavras(); // protótipo da função

int main(){ //função principal
    lerpalavras palavras;

    printf("LENDO DADOS DA STRUCT\n\n");
    palavras = ler3Palavras ();

    printf("As palavras inseridas foram:\n%s\n%s\n%s\n",palavras.p1,palavras.p2,palavras.p3);

    return 0; 
}
//implementado a função
lerpalavras ler3Palavras (){
    lerpalavras palavras;

    printf("Insira a primeira palavra:\n");
    scanf("%s",palavras.p1);
    fflush(stdin); // para limpar buffer do teclado
    
    printf("Insira a segunda palavra:\n");
    scanf("%s",palavras.p2);
    fflush(stdin);

    printf("Insira a terceira palavra:\n");
    scanf("%s",palavras.p3);
    fflush(stdin);

    return palavras;
    
}



