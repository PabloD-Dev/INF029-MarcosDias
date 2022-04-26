/*
Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma
*/
 #include <stdio.h>
 #include <locale.h>

    int somar (int a, int b); // protótipo da função

    int main (){
        setlocale(LC_ALL, ""); // para poder usar acentuação
    
        int n1, n2, result;

        printf("insira um número inteiro: \n");
        scanf("%d",&n1);
        printf("insira outro valor inteiro: \n");
        scanf("%d",&n2);

        result = somar (n1, n2); // aqui os valores de A e B serão copiados para N1 e N2
        printf("o resultado da soma dos valores é: %d", result);

        return 0;

    } //implementando a função
        int somar (int a , int b){  
            int soma; // aqui foi criado outra variável local
            soma = a+b;

        return (soma);

    }

