#include <iostream>
#include "Producto.h"


using namespace std;


Producto::Producto(): cantidad(0),nombre(0),precio(0), sigu(0), ante(0)
{}


void Producto::setSiguiente(Producto *sigu)
{
 this->sigu = sigu;
}

Producto* Producto::getSiguiente()
{
	return this->sigu;
}

void Producto::setcantidad(int cant)
{
	this->cantidad = cant;
}

int Producto::getcantidad()
{
	return cantidad;
}

// LOOK WHATS GOING ON
/*
void Producto::setnombre(string name)
{
	this->nombre = name;
}

int Producto::getnombre()
{
	return nombre;
}
*/
////
void Producto::setprecio(float price)
{
	this->precio = price;
}

int Producto::getprecio()
{
	return precio;
}
bool Producto::Empty()
{
	return ante == 0;
}

void Producto::crearproductos(int cantidad, float precio)
{


	Producto *fl = new Producto;

	fl->setcantidad(cantidad);
	fl->setprecio(precio);


	if (Empty()) {
		ante = fl;
	}
	else
	{
		ante->setSiguiente(fl);
		ante = fl;

	}
}
/*
void Producto::buscar(int  cantidad)
{
	Producto *sigu = sigu;
	string posicion=0;

	while (sigu != 0)
	{
		posicion++;
		if (sigu->getcantidad() = nombre)
			return posicion;

		sigu = sigu->getSig();
	}

	return -1;


}
*/
double Producto::total() {

	double subtotal = cantidad * precio;
	double ISV = subtotal * 0.07;
	double Total = subtotal + ISV;
	return printf("Total  ", Total);
}









