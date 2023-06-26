#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int primeiro[5], segundo[5], encontrou = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> primeiro[i];
    }

    for (int j = 0; j < 5; j++)
    {
        cin >> segundo[j];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (segundo[i] == primeiro[j])
            {
                encontrou = 1;
                cout << "\nValor repetido:\n";
                cout << "\nVetor: 1. Elemento: " << j + 1;
                cout << "\nVetor: 2. Elemento: " << i + 1;
            }
        }
    }
    if (encontrou == 0)
    {
        cout << "Nenhum valor repetido";
    }

    return 0;
}