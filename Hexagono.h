#pragma once
#include "Poligono.h"
ref class Hexagono :	public Poligono
{
public:
	Hexagono(int lado, int apotema);
	int ObtenerArea();
	int ObtenerPerimetro();
};

