#include "Octagono.h"
Octagono::Octagono(int lado, int apotema) {
	this->lado = lado;
	this->apotema = apotema;
}

int Octagono::ObtenerArea() {
	return (ObtenerPerimetro() * apotema) / 2;
}

int Octagono::ObtenerPerimetro() {
	return lado * 8;
}