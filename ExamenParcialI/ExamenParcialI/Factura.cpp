#include <iostream>
#include "Factura.h"
#include "Producto.h"
#include "ListaProducto.h"


using namespace std;

Factura *sigu2 = NULL;
Producto *sigu = NULL;

/*
sigu->crearproductos = (2, 3);
sigu->buscar(nombre).agregar_Producto(cantidad, nombre, precio);
sigu->buscar(nombre).agregar_Producto(cantidad, nombre, precio); 
sigu2->agregarfactura(fecha, nombre);
sigu2->buscar(nombre).agregar_Producto(cantidad, nombre, precio);
*/

Producto hi;
Factura::Factura() : cantr2(0), sigu2(0), ante2(0)
{}


void Factura::setSiguiente(Factura *sigu2)
{
	this->sigu2 = sigu2;

}

Factura* Factura::getSiguiente()
{

	return this->sigu2;
}

void Factura::lista() 
{
	
		Factura *lo = new Factura();
		int contador = 0;

		float Total = 0;

		Producto *lo = new Producto();
		

			Total = Total;

			contador++;
			


		}



int main(){
	cout << "*******************MENU*************************" << endl;
	//cout << crearproducto(*Producto ,1, 2);
	hi.crearproductos(5,4);
	hi.crearproductos(8, 4);
	hi.crearproductos(7, 9);
	hi.total();

	system("pause");
}

/*
Crear función para obtener el total final del detalle de factura:
i. Subtotal: Cantidad x Precio, de todos los productos agregados al detalle.
ii. ISV: 7% del subtotal.
iii. Total final: Subtotal + ISV.


******************MENÚ PRINCIPAL*************

La solución debe permitir :
1. Crear productos - En mi lista "Productos"
2. Crear facturas con su fecha de creación - En mi lista "Facturas"
3. Agregar productos por factura - "Apuntar a mi lista Productos"
4. Contabilizar la cantidad total de facturas - cantidad++;
5. Contabilizar el total facturado por facturas
*/