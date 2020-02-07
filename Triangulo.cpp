#include "Triangulo.hpp"
#include <iostream>
#include <math.h>

using namespace std;

Triangulo :: Triangulo() {
}

Triangulo :: Triangulo(double a, double b, double c) {
	ladoA = a;
	ladoB = b;
	ladoC = c;
	altura = (2 * Heron()) / b;
}

double Triangulo :: Heron() {
	double s = 0, height = 0;
	s = (ladoA+ ladoB + ladoC) / 2;
	height = sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));
	return height;
}

void Triangulo ::  setLadoA (double a) {
	ladoA = a;
}

void Triangulo ::  setLadoB (double b) {
        ladoB = b;
}

void Triangulo ::  setLadoC (double c) {
        ladoC = c;
}

void Triangulo :: setAltura (double alt) {
        altura = alt;
}

double Triangulo :: Area() {
	return (ladoB * altura) / 2;
}
