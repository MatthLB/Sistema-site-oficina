#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>

using namespace std;
using std::string;
using std::getline;


typedef struct Pessoa{
    struct Pessoa * prox;
    int opcao;
    string name;
    string data;
    string tipo;
    int cpf;
    int dose=0.;


}Pessoa;
typedef struct {
    Pessoa *comeco;
    int cont;
    int c = 0;
    int p = 0;
    int a = 0;
    int j = 0;
    int dose1= 0;
    int dose2=0;
    int dose3=0; 
    int dose4=0; 

}Cadastro;

    Pessoa *criaNovaPessoa(Cadastro cadastro, string name, int cpf, string data, int dose, char tipo){
    Pessoa * nova_pessoa = (Pessoa *) malloc(sizeof(Pessoa));
    nova_pessoa->name = name;
    nova_pessoa->data = data;
    nova_pessoa->cpf = cpf;
    nova_pessoa->dose = dose;
    nova_pessoa->tipo = tipo;


    nova_pessoa->prox = NULL;
    return nova_pessoa;
}


void fopcoes (Cadastro *cadastro, string name, int cpf, string data, int dose, string tipo);
void quantCadastro (Cadastro *cadastro);
void busca(int opcao);
void quantDose(Cadastro *cadastro);
void mostrarPessoa (Cadastro *cadastro);
void totalVacina(Cadastro *cadastro);


int main(){ 

    string name, data, tipo;
    int menu, i, opcao, cpf, dose;


    Pessoa pessoa;
    Cadastro cadastro;
    

   
    for(i = 0; i == i; i++){
        cout << "\nopcoes\n";
        cout << "Cadastrar vacinacao...................(1)\n";
        cout << "Buscar e Remover......................(2)\n";
        cout << "Imprimir tudo.........................(3)\n";
        cout << "Total de pessoas vacinadas............(4)\n";
        cout << "Total do tipo da vacina...............(5)\n";
        cout << "Quantidade de cada dose aplicada......(6)\n";
        cout << "PARA SAIR.............................(7)\n";
        cout << "\nEscolha uma opcao:";  
        cin >> menu; 

        switch (menu) {
        
            case 1:
                fopcoes (&cadastro, name, cpf, data, dose, tipo);
            break;

            case 2:
               busca(opcao);
            break;

            case 3:
                quantCadastro(&cadastro);
            break;
               
            case 4:
             mostrarPessoa(&cadastro); 
            break;

            case 5:
                totalVacina(&cadastro);
            break;

            case 6:
                quantDose(&cadastro);
            break;
                
            default:
                cout << "fechando programa........\n\n";
            break;

        
        }
          
    }
   
    
    return 0;
}

void fopcoes (Cadastro *cadastro, string name, int cpf, string data, int dose, string tipo){
    
    if(cadastro->comeco == 0)
        cout << "\n===============================";
        cout << "\nInforme os dados da vacinacao:\n";
        cout << "Nome:";
        cin.ignore(); getline(cin, name);
        cout << "=================================";
        cout << "\nCPF:";
        cin >> cpf;
        cout << "=================================";
        cout << "\nData:";
        cin >> data;
        cout << "=================================";
    
       Pessoa *pessoa, *novo = (Pessoa *)malloc(sizeof(Pessoa));


       do{
            cout << "\nDose:";
            cin >> dose;
            novo->dose = dose;
            if (dose == 1)
            {
                cadastro->dose1++;
            }
            else if (dose == 2)
            {
                cadastro->dose2++;
            }
            else if (dose == 3)
            {
                cadastro->dose3++;
            }
            else if (dose == 4)
            {
                cadastro->dose4++;
            }
        
        } while(dose < 1 || dose > 4);
        cout << "============================================================";

        do{
            cout << "\ntipo ([C]ORONAVAC, [P]FIZER, [A]STRAZENECA, [J]ANSER):";
            cin >> tipo;
            novo->tipo = tipo;
            if (tipo == "C")
            {
                cadastro->c++;
            }
            else if (tipo == "P")
            {
                cadastro->p++;
            }
            else if (tipo == "A")
            {
                cadastro->a++;
            }
            else if (tipo == "J")
            {
                cadastro->j++;
            }
            else
            {
                cout << "Opção invalida!\n";
            }
        }while(tipo != "C" && tipo != "P" && tipo != "A" && tipo != "J");
        cout << "============================================================\n\n";
    cadastro->cont++;
}

void quantCadastro (Cadastro *cadastro){

    Pessoa *comeco = cadastro->comeco;

        while(comeco != NULL){
            cout << "\n============================================================";
            cout << "\nNome =  " << comeco-> name;
            cout << "\nCpf =  " << comeco->cpf;
            cout << "\nData = " << comeco->data;
            cout << "\nDose = " << comeco->dose;
            cout << "\ntipo = " << comeco->tipo;

            if (comeco->tipo == "C"){
                 cout << "C";
            }else if (comeco->tipo == "A"){
                 cout << "A";
            }else if (comeco->tipo == "P"){
                 cout << "P";
            }else if (comeco->tipo == "J"){
                 cout << "J";
            }
           comeco=comeco -> prox;
        }
        
    
    
}
void busca(int opcao){
    cout << "\n1-Buscar 2- Remover:";
    cin >> opcao;

    if(opcao == 1){
        cout << "\nBuscando...\n\n";
    }else if(opcao == 2){
        cout << "\nRemovendo...\n\n";
    }
}

void quantDose(Cadastro *cadastro){
    Pessoa *comeco = cadastro->comeco;
    cout << "\n============================================================";
    cout << "\nQuantidade de cada dose aplicada";
    cout << "\n============================================================";
    cout << "\n\nDose 1 = " << cadastro->dose1;
    cout << "\n============================================================";
    cout << "\nDose 2 = " << cadastro->dose2;
    cout << "\n============================================================";
    cout << "\nDose 3 = " << cadastro->dose3;
    cout << "\n============================================================";
    cout << "\nDose 4 = " << cadastro->dose4;
    cout << "\n============================================================";
    cout << "\n\n";
}

void mostrarPessoa(Cadastro *cadastro)
{
    Pessoa *comeco = cadastro->comeco;
    cout << "\nTotal de pessoas vacinadas: " << cadastro->cont;

}
void totalVacina(Cadastro *cadastro){
    Pessoa *comeco = cadastro->comeco;
    cout << "\n============================================================";
    cout << "\nTotal de pessoas por cada tipo de vacina:";
    cout << "\n\nC = " << cadastro->c;
    cout << "\nP = " << cadastro->a;
    cout << "\nC =  " << cadastro->p;
    cout << "\nJ = " << cadastro->j;
    cout << "\n============================================================";
    cout << "\n\n";
}