#include <iostream>
#include "List.cpp"
#include <cassert>


using namespace std;

int main(){	
	List l;
	AgregarOrdenado(l,11);
	AgregarOrdenado(l,22);
	AgregarOrdenado(l,33);
	AgregarOrdenado(l,44);
	ImprimirLista(l);
}
