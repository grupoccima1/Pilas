#include <iostream>

using namespace std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero;


void insertarNodo();
void buscarNodo();
void desplegarPila();

int main(){
	int opc = 0;
	do{
		cout<<endl<<"|-----------------------|"<<endl;
		cout<<endl<<"|         °MENU°        |"<<endl;
		cout<<endl<<"|-----------------------|"<<endl;
		cout<<endl<<"|1.Insertar | 4.Eliminar|"<<endl;
		cout<<endl<<"|2.Buscar   | 5.Mostrar |"<<endl;
		cout<<endl<<"|3.Modificar| 6.Salir   |"<<endl;
		cout<<endl<<"|-----------------------|"<<endl;
		cout<<endl<<"Elija una opcion"<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Inserte un numero"<<endl;
				insertarNodo();
				break;
			case 2:
				cout<<"Buscando un numero"<<endl;
				buscarNodo();
				break;
			case 3:
				cout<<"Modificar dato"<<endl;
				break;
			case 4:
				cout<<"Eliminar dato"<<endl;
				break;
			case 5:
				cout<<"Mostrando datos"<<endl;
				desplegarPila();
				break;
			case 6:
				cout<<"Hasta luego"<<endl;
				break;
			default:
				cout<<"Seleccione una opcion del menu"<<endl;
				break;
		}
	}while(opc!=6);
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout<<" Ingrese el dato del nodo"<<endl;
	cin>> nuevo->dato;
	nuevo->siguiente = primero;
	primero = nuevo;
	cout<<endl<<" Nodo ingresado"<<endl<<endl;
}

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	int nodoBuscado = 0;	
	bool encontrado = false;
	cout<<"Ingrese el dato a buscar"<<endl;
	cin>>nodoBuscado;
	if(primero != NULL && encontrado != true){
		while(actual != NULL){
			if(actual->dato == nodoBuscado){
				cout <<endl << " Dato ("<< nodoBuscado<<") Encontrado"<<endl;
				encontrado = true;
			}
			actual = actual->siguiente;
		}
		if(encontrado==false){
			cout << endl << "Dato no encontrado"<<endl <<endl;
		}
	} else{
		cout<< endl<< "La pila se encuentra vacia"<< endl<< endl;
	}
}

void desplegarPila(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero != NULL){
		while(actual != NULL){
			cout <<endl <<" "<< actual->dato;
			actual = actual->siguiente;
		}
	} else{
		cout<< endl<< "La pila se encuentra vacia"<< endl<< endl;
	}
}








