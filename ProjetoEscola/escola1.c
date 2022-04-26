//ALUNOS:
//Liane Barbosa Nascimento dos Santos
//Marcos Pablo Dias Marinho


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

typedef struct No{

  char nome[40];
  char sexo[20];
  int matricula;
  char data_nasci[20];
  char cpf[11];
  
  struct No *proximo;
}No;

typedef struct{
  No *inicio;

}Lista;

//inserção inicio
void inserirInicio(Lista *lista){
  	No *aluno;
  	aluno =  (No *) malloc(sizeof(No));
    printf("MATRICULA: ");
    scanf("%d", &aluno->matricula);
    fflush(stdin); getchar();
          	
    printf("NOME: ");
    fgets(aluno->nome, 40, stdin);
    fflush(stdin);
    
    validar_nome(&aluno); getchar();
         	
    printf("SEXO: ");
    fgets(aluno->sexo, 20, stdin);
    fflush(stdin);
          	
    printf("DATA DE NASCIMENTO : ");
    fgets(aluno->data_nasci, 20, stdin); 
    fflush(stdin);
           	
    printf("CPF: ");
    scanf("%s", aluno->cpf);
    fflush(stdin); getchar();
    
    verifica_cpf(&aluno); getchar();
   
    aluno->proximo = lista->inicio;
    lista->inicio = aluno;
    fflush(stdin);
    
}
//imprimir lista
void imprimir(Lista *lista){
  No *inicio = lista->inicio;
  while(inicio != NULL){
    
  	printf("-------------------------");
    printf("\nMatricula: ");
    printf("%d", inicio->matricula);
    fflush(stdin);
      
    printf("\nNome: ");
    printf("%s", inicio->nome);
    fflush(stdin);
    	
    printf("Sexo: ");
    printf("%s", inicio->sexo);
    fflush(stdin);
      
    printf("Data de Nascimento: ");
    printf("%s", inicio->data_nasci);
    fflush(stdin);
      
    printf("Cpf no formato: ");
    printf("%s", inicio->cpf); 
    fflush(stdin);
    printf("\n");
      
    printf("-------------------------\n\n");	
    inicio = inicio->proximo;    
  }
  
} 
//Insere no inicio
void inserir_Professor(Lista *lista){
  
    No *professor;
    professor = (No *) malloc(sizeof(No));
  
    professor =  (No *) malloc(sizeof(No));
    printf("MATRICULA: ");
    scanf("%d", &professor->matricula);
    fflush(stdin);getchar();
            	
    printf("NOME: ");
    fgets(professor->nome, 20, stdin);
    fflush(stdin); getchar();
               	
    printf("SEXO: ");
    fgets(professor->sexo, 20, stdin);
    fflush(stdin); getchar();
            	
    printf("DATA DE NASCIMENTO: ");
     fgets(professor->data_nasci, 10, stdin);
    fflush(stdin);getchar();
             	
    printf("CPF: ");
    fgets(professor->cpf, 20, stdin);
    fflush(stdin); 
     
    professor->proximo = lista->inicio;
    lista->inicio = professor;
}
//valida CPF
int verifica_cpf(Lista *lista){

    No *inicio = lista->inicio;
    
    
    int soma, resultado, numero, contador,aux;
    char digito10, digito11, cpf[11];
      
    for(aux=0; aux <11; aux++){
    	cpf[aux] = inicio->cpf[aux];
	  }
    
    soma=0;
    for(contador=0; contador<9; contador++){
      	numero = cpf[contador] - 48;
      	soma = soma+(numero*(10-contador));
    }
    
    resultado=11-(soma%11);
    if((resultado==10)||(resultado))
      	digito10='0';
    else
      	digito10=resultado+48;
      
    soma = 0;
    for(contador=0; contador < 10; contador++){
      	numero=cpf[contador]-48;
      	soma=soma+(numero*(11-contador));
    }
    
    resultado=11-(soma%11);
    if((resultado==10)&&(resultado==11)){ 
      	digito11='0';
    }
    
    else{ 
      	digito11=resultado+48;
    }
    
    if((digito10==cpf[9])||(digito11==cpf[10])){ 
        return 0;
    }
    
    else{  
      	printf("\nERRO: CPF INVALIDO\n");
        printf("TENTE NOVAMENTE\n");
      
        return 1;
    }
    
}
//Valida Nome
int validar_nome(Lista *lista){
   No *inicio = lista->inicio;
  
    int cont=0;
	
	while(inicio->nome[cont] != '\0'){
		cont++;
  }
		
	if(cont > 50){
  		printf("ERRO: NOME INVALIDO\n");
        return 1;
  }
    else{
        return 0;
    }    
   
}


int main(){
  setlocale(LC_ALL, "portuguese"); 

  int opcao, matricula, op, op1, op2;
  
  Lista lista;
  No aluno;
  No professsor;
  lista.inicio = NULL;
  
  do{

    printf("\tMENU\n\n");
    printf("Escolha o seguimento: \n");
    printf("[1]-Aluno\n");
    printf("[2]-Professor\n");
    printf("[3]-Disciplina\n");
    printf("[4]-Sair\n");
    scanf("%d",&opcao);
    fflush(stdin);
        
      if(opcao < 1 || opcao > 4 )
        printf("Opção invalida. Tente novamente\n");

    if(opcao == 1) {   
  
    while(op != 7) {   
        printf("\tMENU ALUNO\n\n");
        printf("O que deseja fazer: \n");
        printf("[2]-Cadastrar aluno\n");
        printf("[3]-Listar aluno\n");
        printf("[7]-Voltar ao menu principal\n");
        scanf("%d",&op);
        fflush(stdin); 

      if(op == 2){
          system("clear");
          inserirInicio(&lista);
          system("clear");  
      }
      else if(op == 3){
          imprimir(&lista);  
      }
    }
    
  }
    else if(opcao == 2){
        while(op1 != 7){
            printf("\tMENU PROFESSOR\n\n");
            printf("O que deseja fazer: \n");
            printf("[2]-Cadastrar profesor\n");
            printf("[3]-Listar professor\n");
            printf("[7]-Voltar ao menu principal\n");
            scanf("%d",&op1);
            fflush(stdin);
          
            if(op1 == 2){
                system("clear");
                inserir_Professor(&lista);
                system("clear");  
            }
            else if (op1 == 3){
              imprimir(&lista); 
            }
          }
          
        }
  else if(opcao == 3){
    
    while(op2 != 7){
        printf("\tMENU DISCIPLINA\n\n");
        printf("O que deseja fazer: \n");
        printf("[2]-Cadastrar disciplina\n");
        printf("[3]-Listar disciplina\n");
        printf("[7]-Voltar ao menu principal\n");
        scanf("%d",&op2);
        fflush(stdin);
        
    }
      
    }
    else if(opcao == 4){
      printf("\tFINALIZANDO ESCOLA! \n");
    }
  }while(opcao != 4);
  return opcao;
}
  
 