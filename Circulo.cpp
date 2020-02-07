#include "Circulo.hpp"
#include <iostream>

using namespace std;

Circulo :: Circulo() {
}

Circulo :: Circulo(double r) {
	radio = r;
	circunferencia = Circunferencia();
	diametro = 2 * radio;
}

double Circulo :: Circunferencia() {
	return (2 * 3.14159265359 * radio);
}

void Circulo :: setRadio (double r) {
        radio = r;
}

void Circulo :: setDiametro (double d) {
        diametro = d;
}

void Circulo :: setCircunferencia (double c) {
        circunferencia = c;
}

double Circulo :: Area() {
        return 3.14159265359 * (radio* radio);
}

