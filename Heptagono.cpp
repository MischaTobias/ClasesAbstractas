#include "Heptagono.h"
Heptagono::Heptagono(int lado, int apotema) {
	this->lado = lado;
	this->apotema = apotema;
}

int Heptagono::ObtenerArea() {
	return (ObtenerPerimetro() * apotema) / 2;
}

int Heptagono::ObtenerPerimetro() {
	return lado * 7;
}