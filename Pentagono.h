#pragma once
#include "Poligono.h"
ref class Pentagono :	public Poligono
{
public:
	Pentagono(int lado, int apotema);
	int ObtenerArea();
	int ObtenerPerimetro();
};

