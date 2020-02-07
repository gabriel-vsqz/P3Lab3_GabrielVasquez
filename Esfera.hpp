#ifndef ESFERA_HPP
#define ESFERA_HPP
#include "Circulo.hpp"

class Esfera {
        private:
                Circulo circle;
        public:
                Esfera();
                Esfera(Circulo c);
                void setCircle (Circulo c);
                Circulo getCircle() {
                        return circle;
                };
                double Volumen();
};
#endif
