#pragma once



#ifndef PRODUCTO_H

#define PRODUCTO_H

class Producto {


public:

	//void crearproductos();
	void setSiguiente(Producto *);
	Producto* getSiguiente();

	Producto();
	void setcantidad(int);
	int getcantidad();
	//INVESTIGATE THIS ONE
	void setnombre(string);
	int getnombre();

	void setprecio(float);
	int getprecio();


	void crearproductos(int, float);
	void buscar(string);
	bool Empty();
	double total();
private:

	int cantidad;
	string nombre;
	float precio;
	Producto *sigu, *ante;

};


#endif // !"FECHA_H"
