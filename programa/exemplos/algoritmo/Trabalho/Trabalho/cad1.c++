#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
using std::getline;
using std::string;

typedef struct No
{
    struct No *proximo;
    string nome;
    string cpf;
    string data;
    int dose = 0;
    string vacina;
} No;

typedef struct
{
    No *inicio;
    int tam;
    int dose1 = 0;
    int dose2 = 0;
    int dose3 = 0;
    int dose4 = 0;
    int vc = 0;
    int vp = 0;
    int vj = 0;
    int va = 0;
} Lista;

void inserirFim(Lista *lista, string nome, string cpf, string data, int dose, string vacina)
{
    No *no, *novo = (No *)malloc(sizeof(No));

    if (lista->inicio == NULL)
    {
        cout << "Digite o nome: ";
        cin >> nome;
        novo->nome = nome;

        cout << "Digite o CPF: ";
        cin >> cpf;
        novo->cpf = cpf;

        cout << "Digite a data: ";
        cin >> data;
        novo->data = data;

        cout << "Digite a dose aplicada: ";
        cin >> dose;
        novo->dose = dose;
        if (dose == 1)
        {
            lista->dose1++;
        }
        else if (dose == 2)
        {
            lista->dose2++;
        }
        else if (dose == 3)
        {
            lista->dose3++;
        }
        else if (dose == 4)
        {
            lista->dose4++;
        }

        cout << "Tipo da vacina\n";
        cout << "C para Coronavac P para Pfizer A para Astrazeneca J para Jansen:\n";
        cin >> vacina;
        novo->vacina = vacina;

        if (vacina == "C")
        {
            lista->vc++;
        }
        else if (vacina == "P")
        {
            lista->vp++;
        }
        else if (vacina == "A")
        {
            lista->va++;
        }
        else if (vacina == "J")
        {
            lista->vj++;
        }

        lista->inicio = novo;
    }
    else
    {
        no = lista->inicio;
        while (no->proximo != NULL)
            no = no->proximo;
        no->proximo = novo;
        cout << "Digite o nome: ";
        cin >> nome;
        novo->nome = nome;

        cout << "Digite o CPF: ";
        cin >> cpf;
        novo->cpf = cpf;

        cout << "Digite a data: ";
        cin >> data;
        novo->data = data;

        cout << "Digite a dose aplicada: ";
        cin >> dose;
        novo->dose = dose;
        if (dose == 1)
        {
            lista->dose1++;
        }
        else if (dose == 2)
        {
            lista->dose2++;
        }
        else if (dose == 3)
        {
            lista->dose3++;
        }
        else if (dose == 4)
        {
            lista->dose4++;
        }

        cout << "Tipo da vacina\n";
        cout << "C para Coronavac P para Pfizer A para Astrazeneca J para Jansen:\n";
        cin >> vacina;
        novo->vacina = vacina;

        if (vacina == "C")
        {
            lista->vc++;
        }
        else if (vacina == "P")
        {
            lista->vp++;
        }
        else if (vacina == "A")
        {
            lista->va++;
        }
        else if (vacina == "J")
        {
            lista->vj++;
        }
    }
    lista->tam++;
}

void mostrarDose(Lista *lista)
{
    No *inicio = lista->inicio;
    cout << "\nTotal por doses:";
    cout << "\n\nPrimeira dose: " << lista->dose1;
    cout << "\nSegunda dose: " << lista->dose2;
    cout << "\nTerceira dose: " << lista->dose3;
    cout << "\nQuarta dose: " << lista->dose4;
    cout << "\n\n";
}

void imprimir(Lista *lista)
{
    No *inicio = lista->inicio;
    cout << "\nTotal de pessoas vacinadas: " << lista->tam;
    cout << "\n\n";
}

void mostrarTudo(Lista *lista)
{
    No *inicio = lista->inicio;
    while (inicio != NULL)
    {
        cout << "\n\n==========================";
        cout << "\nNome: " << inicio->nome;
        cout << "\nCPF: " << inicio->cpf;
        cout << "\nData: " << inicio->data;
        cout << "\nDose: " << inicio->dose;
        cout << "\nTipo Vacina:" << inicio->vacina; 
        cout << "\n\n";
        inicio = inicio->proximo;
    }
}

void pessoasPorVacina(Lista *lista)
{
    No *inicio = lista->inicio;
    cout << "\n\nTotal de pessoas por cada tipo de vacina:";
    cout << "\n\nCoronavac: " << lista->vc;
    cout << "\nPfizer: " << lista->vp;
    cout << "\nAstrazeneca: " << lista->va;
    cout << "\nJansen: " << lista->vj;
    cout << "\n\n";
}

//---------------------------------------------------------------

int main()
{
    Lista lista;

    int op;
    string nome;
    string cpf;
    string vacina;
    string data;
    int dose = 0;

    lista.inicio = NULL;
    lista.tam = 0;

    do
    {
        cout << "\n1 - Cadastrar"
                "\n2 - Quantidade de pessoas vacinadas"
                "\n3 - Mostrar tudo"
                "\n4 - Total por doses"
                "\n5 - Total de pessoas por vacinas"
                "\n6 - sair\n";
        cin >> op;
        switch (op)
        {
        case 1:
            inserirFim(&lista, nome, cpf, data, dose, vacina);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 3:
            mostrarTudo(&lista);
            break;
        case 4:
            mostrarDose(&lista);
            break;
        case 5:
            pessoasPorVacina(&lista);
            break;
        case 6:
            cout << "\nFinalizando...\n";
            break;
        default:
            cout << "\nOpcao invalida\n";
        }

    } while (op != 6);
}