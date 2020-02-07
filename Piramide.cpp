#include "Piramide.hpp"
#include "Triangulo.hpp"

using namespace std;

Piramide :: Piramide() {
}

Piramide :: Piramide(Triangulo t, double alt) {
	triangle = t;
	altura = alt;
}

void Piramide :: setTriangle (Triangulo t) {
        triangle = t;
}

void Piramide :: setAltura (double alt) {
        altura = alt;
}

double Piramide :: Volumen() {
	return ((altura * triangle.getLadoB()) / 3);
}
