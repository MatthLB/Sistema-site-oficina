#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

typedef struct minha_estrutura
{
	int variavel_um;
	int campo_dois;
	char fruta[40];
} Estrutura;

void preenche_struct(Estrutura * ponteiro)
{
	cout << "informe o atributo variavel_um:\n";
	cin >> ponteiro->variavel_um;
	cout << "informe o atributo campo_dois:\n";
	cin >> ponteiro->campo_dois;
	cout << "informe o atributo fruta[0]:\n";
	cin >> ponteiro->fruta[0];
}
int main()
{
	Estrutura exemplo;
	Estrutura *ptr;
	ptr = &exemplo;

	exemplo.variavel_um = 78;
	ptr->campo_dois = 100;
	(*ptr).fruta[0] = 'Z';

	printf("%d - %d - %c\n", exemplo.variavel_um,
		   exemplo.campo_dois, exemplo.fruta[0]);

	preenche_struct(ptr);

	printf("%d - %d - %c\n", exemplo.variavel_um,
		   exemplo.campo_dois, exemplo.fruta[0]);

	return 0;
}