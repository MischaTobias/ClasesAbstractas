#include "Hexagono.h"
Hexagono::Hexagono(int lado, int apotema) {
	this->lado = lado;
	this->apotema = apotema;
}

int Hexagono::ObtenerArea() {
	return (ObtenerPerimetro() * apotema) / 2;
}

int Hexagono::ObtenerPerimetro() {
	return lado * 6;
}