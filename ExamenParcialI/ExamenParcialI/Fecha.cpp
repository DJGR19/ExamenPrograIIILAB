#include <iostream>
#include "Fecha.h"



using namespace std;


Fecha::Fecha(): dia(0),mes(0),anio(0)
{}


void Fecha::setdia(int dia)
{
	this->dia = dia;
}
int Fecha::getdia() 
{
	return dia;

}


void Fecha::setmes(int mes)
{
	this->mes = mes;
}
int Fecha::getmes()
{
	return mes;

}


void Fecha::setanio(int anio)
{
	this->anio = anio;
}
int Fecha::getanio()
{
	return anio;

}

int Fecha::imprimir()
{
	 cout << "Día: " << dia << "Mes" << mes << "Año" << anio;
	return  imprimir();
}






