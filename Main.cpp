#include "Triangulo.hpp"
#include "Circulo.hpp"
#include "Piramide.hpp"
#include "Esfera.hpp"
#include <iostream>

using namespace std;

int opcion, numero = 0, a = 0, b = 0, c = 0, radio = 0;

int NumeroTriangular(int n) {
	int triangular = 0;
	for (int i = 1; i <= n; i++) {
		if (n >= (triangular + 1) ) {
				triangular +=i;
		}
	}
	return triangular;
}

int main() {
	cout << "Triángulo\n";
	cout << "Ingrese Lado A: ";
        cin >> a;
	cout << "Ingrese Lado B: ";
	cin >> b;
	cout << "Ingrese Lado C: ";
	cin >> c;
	Triangulo triangle(a, b, c);

	cout << "Círculo\n";
	cout << "Ingrese el radio del círculo: ";
	cin >> radio;
	Circulo circle(radio);


	do {
		cout << "\n0. Salir\n1. Identificar número triangular previo\n2. Calcular área de triángulo\n3. Calcular área de circulo"
                        "\n4. Calcular volumen de pirámide\n5. Calcular volumen de esfera\nIngrese la opción que desea: ";
                cin >> opcion;
		switch (opcion) {
			case 1:{
				       cout << "Ingrese un número: ";
       				       cin >> numero;
       				       cout << "Mayor Número Triangular: " << NumeroTriangular(numero) << endl;
				 }break;
			case 2:{
				       cout << "El área del triángulo es: " << triangle.Area() << " u²" << endl;
			       }break;
			case 3:{
				       cout << "El área del círculo es: " << circle.Area() << " u²" << endl;
			       }break;
			case 4:{
				       double alt_pyr = 0;
				       cout << "Ingrese la altura de la pirámide: ";
				       cin >> alt_pyr;
				       Piramide pyramid(triangle, alt_pyr);
				       cout << "El volumen de la pirámide es: " << pyramid.Volumen() <<  " u³" << endl;
			       }break;
			case 5:{  
				       Esfera sphere(circle);
				       cout << "El volumen de la esfera es: " << sphere.Volumen() << " u³" << endl;
			       }break;
			default:{
				if (opcion != 0)
					cout << "Debe ingresar una de las opciones presentadas.\n";
				else
					cout << "Salió del programa :)\n";
				}
		}
	}while (opcion != 0);

}
