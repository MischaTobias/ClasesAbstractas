#include "Cuadrilatero.h"
Cuadrilatero::Cuadrilatero(int lado) {
	this->lado = lado;
}

int Cuadrilatero::ObtenerArea() {
	return lado * lado;
}

int Cuadrilatero::ObtenerPerimetro() {
	return lado * 4;
}