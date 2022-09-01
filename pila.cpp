#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
	int numero;
	struct nodo *siguiente;
};


typedef nodo *ptrPila;//Crear puntero

void push(ptrPila &p, int valor){
	ptrPila aux;
	aux = new(struct nodo);
	aux->numero = valor;
	aux->siguiente = p;
	p = aux;
}


int pop(ptrPila &p){
	int numero;
	ptrPila aux;
	
	aux = p;
	numero = aux->numero;//Asignamos el primer valor de la pila
	
	p = aux->siguiente;
	delete(aux);
	
	return numero;	
}

void listarPila(ptrPila p){
	ptrPila aux;
	aux = p;//Apuntamos el primer numero de la pila
	
	while(aux != NULL){
		cout<<"\t"<< aux->numero<<endl;
		aux = aux->siguiente;
	}
}

void menu(){
	cout<<"\tMenu de opciones"<<endl;
	cout<<"1.Agregar"<<endl;
	cout<<"2.Eliminar"<<endl;
	cout<<"3.Mostrar"<<endl;
	cout<<"4.Salir"<<endl;
	cout<<"\tSelecione una opcion: "<<endl;
}

int main(){
	ptrPila p = NULL;//Creacion de pila
	int dato, opc, x;
	do{
		menu(); cin>>opc;
		
		switch(opc){
			case 1: 
				cout<<"\nDigite un un numero: "<<endl;
				cin>>dato;
				push(p,dato);
				cout<<"\n\n\tNumero: "<< dato << " Agregado"<<endl;
				break;
			case 2:
				x = pop(p);
				cout<<"\n\n\tNumero: "<< x<< " Eliminado"<<endl;
				break;
			case 3: 
				cout<<"Listando pila"<<endl;
				if(p != NULL)
					listarPila(p);
				else 
				cout<<"\tNo hay elementos"<<endl;
				break;
		}
		cout<<endl<<endl;
		system("pause"); system("cls");
	} while(opc!=4);
	return 0;
}












