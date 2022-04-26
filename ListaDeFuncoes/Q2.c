/*
Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração
*/
#include <stdio.h>
#include <locale.h>

    int subtracao ( int a, int b, int c); // protótipo da função

    int main (){
        setlocale(LC_ALL, ""); // para poder usar acentuação
    
        int n1, n2, n3, calc; 

        printf("insira o primero número: \n");
        scanf("%d",&n1);
        printf("insira o segundo número: \n");
        scanf("%d",&n2);
        printf("insira o terceiro número: \n");
        scanf("%d",&n3);

        calc = subtracao (n1, n2, n3); // aqui os valores de A,B e C serão copiados para N1,N2 e N3
        printf("o resultado da subtração dos três valores eh: %d",calc);

        return 0;
    }
        int subtracao (int a, int b , int c){
            int subtrai;
            subtrai = a - b - c;

            return(subtrai);

        }

    
    
