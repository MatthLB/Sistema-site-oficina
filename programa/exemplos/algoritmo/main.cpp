#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std; //sempre usar quando for usar a biblioteca iostream

int main()
{

    string nome = "Lucas Vieira";
    int i = 0;
    while (nome[i] != '\0')
    {
        cout << nome[i] << "\n";
        i++;
    }
    system("PAUSE");
    return EXIT_SUCCESS;

    //cout << "alo mundo" << "DAFD"; -- PARA CONCATENAR

    // cout << "Digite um numero: ";
    // int x = 0;
    // cin >> x;
    // cout << "\nDigitou: " << x;
    // int r = cubo(x);
    // cout << "\n cubo = " << r;

    // int v1[10], v2[5], v3[15];

    // for(int i = 0; i < 10; i++){
    //     cin >> v1[i];
    // }
    // for(int x = 0; x < 5; x++){
    //     cin >> v2[x];
    // }

    // for(int i = 0; i < ; i++){
    //     cout << v2[i];
    // }

    //======================== ATIVIDADE 2 ==============================

    // int vetor[20];

    // for(int i = 0; i < 20; i++){
    //     cin >> vetor[i];
    // }

    // for (int i = 19; i >= 0; i--){
    //     cout << " " << vetor[i];
    // }

    //======================== ATIVIDADE 3 ==============================

    // int primeiro[5], segundo[5], encontrou = 0;

    // for(int i = 0; i < 5; i++){
    //     cin >> primeiro[i];
    // }

    //  for(int j = 0; j < 5; j++){
    //     cin >> segundo[j];
    // }

    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         if(segundo[i] == primeiro[j]){
    //             encontrou = 1;
    //             cout << "\nValor repetido:\n";
    //             cout << "\nVetor: 1. Elemento: " << j+1;
    //             cout << "\nVetor: 2. Elemento: " << i+1;
    //         }
    //     }
    // }
    // if(encontrou == 0){
    //     cout << "Nenhum valor repetido";
    // }

    return 0;
}