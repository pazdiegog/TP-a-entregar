#include <iostream>
#include "List.h"
using namespace std;

void AgregarOrdenado(List &l,int x){
Nodo*Nuevo=new Nodo();
Nuevo->valor=x;
Nuevo->sgt=NULL;
Nodo*ant=NULL;
Nodo*aux=l.primero;
while(aux!=NULL and aux->valor<=x)	{

	ant=aux;
	aux=aux->sgt;
	}
	if(ant==NULL){
		l.primero=Nuevo;
	}else{
		ant->sgt=Nuevo;
	}
	Nuevo->sgt=aux;
};


void ImprimirLista(const List & l){
	Nodo*aux=l.primero;
	while(aux!=NULL){
			cout<<"La lista contiene "<<aux->valor <<endl;
			aux=aux->sgt;	
	}
};
