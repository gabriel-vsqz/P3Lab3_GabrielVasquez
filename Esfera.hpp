#ifndef ESFERA_HPP
#define ESFERA_HPP

class Circulo {
        private:
                double radio, diametro, circunferencia;
                double Circunferencia();
        public:
                Circulo();
                Circulo(double r);
                void setRadio (double r);
                double getRadio() {
                        return radio;
                };
                void setDiametro (double d);
                double getDiametro() {
                        return diametro;
                };
                void setCircunferencia (double c);
                double getCircunferencia() {
                        return circunferencia;
                };
                double Area();
};
#endif
