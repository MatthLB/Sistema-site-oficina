#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int * pt = (int *)malloc(sizeof(int));
    if(pt == NULL) {
        cout << "memoria insuficiente!!";
    }else{
        cout << pt << "\n";
        cout << *pt << "\n"; //lixo
        *pt = 47;
        cout << *pt << "\n";
    }

    //char * pointchar = (char *)calloc(5,sizeof(int));
	return 0;
}