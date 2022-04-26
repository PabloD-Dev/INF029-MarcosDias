/*
Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
imprimir os dados do cliente.
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct {  
    char nome [30];
    char sexo [20];
    char cpf[30];
    char datanasc [10];
 
}cliente; //definição da struct

 cliente cadastrarCliente(); //protótipo da função

int main() { //função principal
    cliente cadastro;

    cadastro = cadastrarCliente();

    printf("LENDO DADOS DA STRUCT\n\n");
    system("cls");

    printf("NOME: %s\n",cadastro.nome);
    printf("SEXO: %s\n",cadastro.sexo);
    printf("CPF: %s\n",cadastro.cpf);
    printf("DATA DE NASCIMENTO: %s\n",cadastro.datanasc);
    
    return 0;

}
//implementando a função
cliente cadastrarCliente(){
    cliente cadastro;

    printf("CADASTRO CLIENTE\n\n");
    system("cls"); //para limpar uma parte da tela

    printf("Informe o nome do cliente: \n");
    fflush(stdin);
    gets(cadastro.nome);
    
    printf("Informe o sexo do cliente: \n");
    fflush(stdin);
    gets(cadastro.sexo);
    
    printf("Informe o cpf do cliente no formato 000.000.00-00: \n");
    fflush(stdin);
    scanf("%s",&cadastro.cpf);
    
    printf("Informe a data de nascimento do cliente no formato 00/00/0000: \n");
    fflush(stdin);
    gets(cadastro.datanasc);
    

    return cadastro;


}


