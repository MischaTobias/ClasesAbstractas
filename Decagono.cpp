#include "Decagono.h"
Decagono::Decagono(int lado, int apotema) {
	this->lado = lado;
	this->apotema = apotema;
}

int Decagono::ObtenerArea() {
	return (ObtenerPerimetro() * apotema) / 2;
}

int Decagono::ObtenerPerimetro() {
	return lado * 10;
}