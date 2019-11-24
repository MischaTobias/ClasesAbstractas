#pragma once
#include "Poligono.h"
ref class Octagono :	public Poligono
{
public:
	Octagono(int lado, int apotema);
	int ObtenerArea();
	int ObtenerPerimetro();
};

