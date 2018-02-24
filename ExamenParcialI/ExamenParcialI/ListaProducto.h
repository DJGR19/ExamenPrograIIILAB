#pragma once

#ifndef LISTAPRODUCTO_H

#define LISTAPRODUCTO_H
#include "Producto.h"


class ListaProducto {
	

public:
	void crearproductos(int, float);
	ListaProducto();
	bool Empty();
private:

	int cantidad;
	//string nombre;
	float precio;
	//QUITAR EL SIG Y ANTES!!! YA QUE ESTE ES PARA ENLAZE DOBLE
	Producto *ante;
	Producto *sigue






};

#endif