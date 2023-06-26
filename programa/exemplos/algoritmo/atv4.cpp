#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome = "Matheus Bezerra";
    int i = 0;
    while (nome[i] != '\0')
    {
        cout << nome[i] << "\n";
        i++;
    }system("PAUSE");
    
    return 0;
}