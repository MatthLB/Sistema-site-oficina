#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
#include<conio.h>  

struct list  
{  
    int codcli, codprod, quant;
    char nome[40]; 
    char cpf[15]; 
    char tipo_vacina[11]; 
    char data[10]; 
    char dose[5];  
    struct list *anterior;    
    struct list *proximo;     
}; 
  
typedef struct list Lista;  

//Funçao que insere no final da lista.  
void inserirFim(Lista **paramLista, int x, char parNome[], char parCpf[], char parTipo_Vacina[], char parData[], char parDose[], int y, int z)
{  
     Lista *nList;//criando ponteiro nova lista.  
     nList=(Lista*)malloc(sizeof(Lista));//alocando o espaço em memória e usando cast.  
     nList->codcli = x; //atribuindo valor para n nova lista.   
     strcpy(nList->nome,parNome);
     strcpy(nList->cpf,parCpf);
     strcpy(nList->tipo_vacina,parTipo_Vacina);
     strcpy(nList->data,parData);
     strcpy(nList -> dose,parDose);
     nList->codprod = y;
     nList->quant = z;     
     nList->anterior = NULL;// apontando para inicio da lista
     nList->proximo = NULL;// apontando para fim da lista  
  
     if(*paramLista == NULL)
     {//verifica se é o final da fila  
        *paramLista = nList;//se for insere a nova lista no final  
     }else
     {            
        Lista *listaAux; //senao cria uma lista auxiliar  
        listaAux = *paramLista; //coloca a lista atual na lista auxiliar  
        while(listaAux->proximo != NULL){ //e vai percorrendo a lista ate encontrar o final ou seja NULL  
            listaAux = listaAux->proximo; //enquato não acha o final ela fica colocando "as estruturas listas" na lista temporaria  
        }//obviamente uma hora ela vai chegar no final da lista ou seja nesta linha  
        listaAux->proximo = nList;//como ele já esta no final da fila ele so adiciona a nova lista  
        nList->anterior = listaAux;//guarda o endereço da informação anterior
    }         
}