#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo {
	private:
		double ladoA, ladoB, ladoC, altura;
		double Heron();
	public:
		Triangulo();
		Triangulo(double a, double b, double c);
		void setLadoA (double ladoA);
		double getLadoA() {
			return ladoA;
		};
		void setLadoB (double ladoB);
                double getLadoB() {
			return ladoB;
	       	};
		void setLadoC (double ladoC);
                double getLadoC() {
			return ladoC;
		};
		void setAltura (double altura);
		double getAltura() {
			return altura;
		};
		double Area();
};
#endif
