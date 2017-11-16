#include <iostream>


struct Nodo{
	int valor;
	Nodo* sgt;
};

struct List {
	Nodo* primero;
};


void AgregarOrdenado(List &, int);
void ImprimirLista(const List&);
