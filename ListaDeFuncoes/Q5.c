
/*
Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.
*/
#include<stdio.h>
#include<stdlib.h>

 typedef struct { 
    int num1;
    int num2;
    int num3;
    int num4;  
}lernumeros;//definição da struct

 lernumeros ler4Numeros();

int main(){ //função princpal
    lernumeros numeros;

    printf("LENDO DADOS DA STRUCT\n\n");

    numeros = ler4Numeros();

    printf("os numeros inseridos foram: %d,%d,%d,%d\n\n",numeros.num1,numeros.num2,numeros.num3,numeros.num4);

    return 0;
}

//implementando a função
 lernumeros ler4Numeros() {   

    lernumeros numero;

    printf("Insira o primeiro numero: ");
    scanf("%d",&numero.num1);

    printf("Insira o segundo numero: ");
    scanf("%d",&numero.num2);

    printf("Insira o terceiro numero: ");
    scanf("%d",&numero.num3);

    printf("Insira o quarto numero: ");
    scanf("%d",&numero.num4);

    return numero;

}