#pragma once


#ifndef FACTURA_H
#define FACTURA_H

#include "Producto.h"
#include "Fecha.h"
#include "ListaProducto.h"

class Factura {
	
public:
	Factura();

	void setSiguiente(Factura *);
	Factura* getSiguiente();
	void TotalFactura();
	int fechafactu();
	void lista();

private:
	string nombrecustom;

	int cantr2;

	Factura *sigu2;
	Factura *ante2;
	Producto *sigu, *ante;

	




};


#endif 
