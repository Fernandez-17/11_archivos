// ESCRITURA DE ARCHIVOS BINARIOS
#include <iostream>
#include <fstream>
#include "registro.h"
using namespace std;
int main (){
	tRegistro registro;
	ftream archivo;
	archivo.open("bd.dat", ios::out | ios::binary);
	bool seguir = true;
	while (seguir){
		cout << "Codigo : ";
		cin.sync();
		cin >> registro.codigo;
		cout << "Nombre : ";
		cin.sync();
		cin.getline(registro.item,MAX); // MAX:80
		cout << "Precios: ",
		cin.sync();
		cin << registro.valor;
		archivo.write( (char *) &registro, SIZE);
		cout << "Otro [S/N] : ";
		char c;
		cin >> c;
		if ( (c=='n')||(c=='N')){
			seguir = false;
		}		 
	}
	archivo.close();
	return 0;
}