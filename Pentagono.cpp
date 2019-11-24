#include "Pentagono.h"
Pentagono::Pentagono(int lado, int apotema) {
	this->lado = lado;
	this->apotema = apotema;
}

int Pentagono::ObtenerArea() {
	return (ObtenerPerimetro() * apotema) / 2;
}

int Pentagono::ObtenerPerimetro() {
	return lado * 5;
}