
#include <iostream>	
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


void MostrarMenu() {
	cout << endl;
	cout << "Menu" << endl;
	cout << "" << endl;
	cout << "1.   Leer archivos .inv e imprimir contenido" << endl;
	cout << "2.   salir" << endl;
	cout << "" << endl;
}

void LeerArchivos(const string& inventario) {
	ifstream archivo(inventario);


	if (!archivo.is_open()) {
		cout << "\nError: no se pudo abrir el archivo " << inventario << endl;
		return;
	}

	string linea;
	getline(archivo, linea);

	cout << "\nNombre del producto-- Cantidad -- Precio unitario -- Ubicacion\n"; 
	while (getline(archivo, linea)) {
		
		string producto, ubicacion;
		int cantidad;
		double precio;

		stringstream ss(linea);
		ss >> producto >> cantidad >> precio >> ubicacion;

		if (!ss.fail()) {
			cout << "__ " << producto << "__ " << cantidad << "__ " << precio << "__ " << ubicacion << endl;
		}
		else {
			cout << "Linea invalida: " << linea << endl;
		}
	} archivo.close();
}

int main()
{
	bool Cerrar = false;
	int opcion;

	while (!Cerrar) {
		MostrarMenu();
		cin >> opcion;

		switch (opcion) {

		case 1:
			
			cout << "\nDecifrando archivo 010101010101001" << endl;
			LeerArchivos("inventario.inv");
			break;

		case 2:
			Cerrar = true;
			break;

		default:
				cout << "Ingrese una opcion valida" << endl;
				break;
		}

	}

}