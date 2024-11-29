// LECTURA DE ARCHIVOS BINARIOS
#include <iostream>
#include <fstream>
#include "registro.h"
using namespace std;
int main (){
	tRegistro registro ;
	fstream archivo;
	archivo.open("bd.dat",ios ::in | ios::binary);
	archivo.red ((char *) &registro, SIZE);
	int cuantos = archivo.gcount ();
	while (cuantos ==SIZE){
		mostrar (registro); //Funcion mostrar registro
		archivo.red ((char *) & registro, SIZE);
		cuantos = archivo.gcount();		
	}
	archivo.close ();
	return 0;
}

