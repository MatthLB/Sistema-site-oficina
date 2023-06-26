#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

    int vetor[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 19; i >= 0; i--)
    {
        cout << " " << vetor[i];
    }

    return 0;
}