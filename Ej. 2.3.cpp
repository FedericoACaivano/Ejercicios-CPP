#include <iostream>
using namespace std;
/*Desarrolle un procedimiento que reciba el costo en pesos 
de un abono telefónico, la cantidad de minutos libres que incluye el abono,
el cargo en pesos por minuto excedente y la cantidad de minutos utilizados
por un abonado, retorne la cantidad de minutos excedidos 
y el monto en pesos a abonar (costo del abono mas minutos excedidos 
por el costo de minutos excedidos) mas el 21% del valor del IVA.
UTILICE FUNCIONES.*/


float Minutos(float, float);
float Deuda(float, float, float, float);


int main(int argc, char** argv){
float costo;
float cargo_exced; 
float min_libres;
float min_utiliz;

cout << "Ingrese el costo del plan: " << endl;
cin >> costo;

cout << "Ingrese la cantidad de minutos libres que incluye el plan: " << endl;
cin >> min_libres;

cout << "Ingrese el cargo por cada minuto excedido: " << endl;
cin >> cargo_exced;

cout << "Ingrese la cantidad de minutos gastados: " << endl;
cin >> min_utiliz;

cout << "Minutos excedidos: " << Minutos (min_libres, min_utiliz) << endl;
cout << "Total a pagar (IVA incluido): $" << Deuda(costo, cargo_exced, min_libres, min_utiliz) << endl;



return 0;
}


//tuve que hacer dos funciones separadas para que me devuelva dos valores
// (deuda y min_exced), sin usar struct
float Minutos(float min_libres, float min_utiliz){
	
		float min_exced;
		if (min_utiliz > min_libres){
		min_exced =  min_utiliz - min_libres;
		 
		}
		
		if (min_utiliz < min_libres){
			min_exced = 0;
		}
	
		return min_exced;	
	}

float Deuda(float costo, float cargo_exced, float min_libres, float min_utiliz){
	
	float deuda;
	
	//el IVA se calcula sobre el total y se suma a él.
	deuda = costo + (Minutos(min_libres, min_utiliz) * cargo_exced) + ((21*(costo + (Minutos(min_libres, min_utiliz) * cargo_exced))) / 100);
	
	return deuda;
	
	
}

