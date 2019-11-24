#pragma once
#include "Poligono.h"
ref class Heptagono :	public Poligono
{
public:
	Heptagono(int lado, int apotema);
	int ObtenerArea();
	int ObtenerPerimetro();
};

