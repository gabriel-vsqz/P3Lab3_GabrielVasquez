#include "Esfera.hpp"
#include "Circulo.hpp"

using namespace std;

Esfera :: Esfera() {
}

Esfera :: Esfera(Circulo c) {
	circle = c;
}

void Esfera :: setCircle (Circulo c) {
        circle = c;
}

double Esfera :: Volumen() {
	return (4 * 3.14159265359 * (circle.getRadio() * circle.getRadio() * circle.getRadio()) )/3;
}
