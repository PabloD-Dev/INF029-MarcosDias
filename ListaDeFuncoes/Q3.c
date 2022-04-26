/*
Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial
*/
#include <stdio.h>
#include <locale.h>

int fatorial (int number); //protótipo de função
    
int main ( ){
    setlocale(LC_ALL, "portuguese"); //para poder usar acentuação
    int num, resultado;

    printf("NÃO É POSSÍVEL CALCULAR FATORIAL DE NÚMEROS NEGATIVOS!\n");
    printf("insira o número inteiro para o qual deseja calcular o fatorial: \n");
    scanf("%d",&num);

    if(num < 0){ //caso seja inserido um número negativo

        printf("não é possivel calcular o fatorial!\n");
    }else{

         resultado = fatorial(num);

        printf("o fatorial do número eh: %d",resultado);
    }
    return 0;
} 
//implementado a função  
int fatorial (int number){
    int fat;
    fat = number;

    for(fat=1; number>1; number = number-1)//laço que verifica o fatorial do número inserido
        fat = fat*number;
      
    return (fat); 
      
}

