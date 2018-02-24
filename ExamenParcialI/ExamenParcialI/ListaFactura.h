#pragma once
#ifndef LISTAFACTURA_H

#define LISTAFACTURA_H
#include "Producto.h"
#include "Factura.h"


class ListaFactura {
	ListaFactura();

public:
	void cantidadfactu(int, float);
	void suma();

private:

	int cantidad;
	//string nombre;
	float precio;

	Factura *sigu, *ante;
	/*
	a. Contabilizar la cantidad total de facturas creadas.
b. Sumar el total neto pagado por todas las facturas creadas en el sistema.
	
	
	*/





};

#endif