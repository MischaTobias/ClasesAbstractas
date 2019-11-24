#include "Eneagono.h"
Eneagono::Eneagono(int lado, int apotema) {
	this->lado = lado;
	this->apotema = apotema;
}

int Eneagono::ObtenerArea() {
	return (ObtenerPerimetro() * apotema) / 2;
}

int Eneagono::ObtenerPerimetro() {
	return lado * 9;
}