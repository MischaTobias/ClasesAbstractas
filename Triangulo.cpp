#include "Triangulo.h"
Triangulo::Triangulo(int lado) {
	this->lado = lado;
}

int Triangulo::ObtenerArea() {
	return (sqrt(3) / 4 * pow(lado, 2));
}

int Triangulo::ObtenerPerimetro() {
	return lado * 3;
}