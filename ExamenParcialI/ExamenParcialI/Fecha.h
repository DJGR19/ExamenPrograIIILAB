
#ifndef FECHA_H

#define FECHA_H

class Fecha {

	Fecha();
public:
	

	int imprimir();

	int getdia();
	void setdia(int);

	int getmes();
	void setmes(int);

	int getanio();
	void setanio(int);

private:
	int dia;
	int mes;
	int anio;



};


#endif // !"FECHA_H"



