#include <iostream>
#include <vector>
#include <string>

using namespace std;



class AlbumMusica {
private:
	string artista;
	int fechaSalida;
	string mejorCancion;


public:
	AlbumMusica(string artista, int fechaSalida, string mejorCancion)
		:artista(artista), fechaSalida(fechaSalida), mejorCancion(mejorCancion) {}


		// 1er metodo
		void mostrarInfo() {
			cout << "Artista:_________________" << artista << endl;
			cout << "Fecha de lanzamiento:____" << fechaSalida << endl;
			cout << "Mejor cancion:___________" << mejorCancion << endl;
		}

		// 2do metodo
		void reproducirCancion() {
			cout << "   reproduciendo  " << mejorCancion << "   del artista   " << artista << endl;
		}
};

int main() {
	const int MAX_ALBUMES = 10;

	AlbumMusica album1("nach", 2008, " Anochece / Manifiesto");
	AlbumMusica album2("Rapsusklei", 2014, " El Emigrante");

	//llamdano funciones 
	album1.mostrarInfo();
	album1.reproducirCancion();

	cout << endl;

	album2.mostrarInfo();
	album2.reproducirCancion();

	return 0;

}