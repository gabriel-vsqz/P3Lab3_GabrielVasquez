#ifndef PIRAMIDE_HPP
#define PIRANIDE_HPP
#include "Triangulo.hpp"

class Piramide {
        private:
                Triangulo triangle;
		double altura;
        public:
                Piramide();
                Piramide(Triangulo t, double alt);
                void setTriangle (Triangulo t);
                double getTriangle() {
                        return triangle;
                };
                void setAltura (double alt);
                double getAltura() {
                        return altura;
                };
                double Volumen();
};
#endif

