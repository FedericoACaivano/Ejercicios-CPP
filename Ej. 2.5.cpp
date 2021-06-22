#include <iostream>
using namespace std;


int main(int argc, char** argv){
	long long int DNI;
	string sexo = "";
	
	int prefijo;
	int sufijo;
	
/*------CHEQUEO DE INGRESOS VÁLIDOS-----------*/
	cout << "Ingrese el numero de DNI: " << endl;
	cin >> DNI;	
	
	while ((DNI < 0) || (DNI > 100000000)){
	cout << "Ingreso incorrecto. Ingrese el DNI nuevamente: " << endl;
	cin >> DNI;	
	}
	
		cout << "Ingrese el sexo (hombre o mujer): " << endl;
		cin >> sexo;
		
	while ((sexo != "hombre") && (sexo != "mujer")){
		cout << "Ingreso incorrecto. Ingrese el sexo nuevamente: " << endl;
		cin >> sexo;
	}
/*----------FIN CHEQUEO-------------*/

//separo el DNI en cada una de sus cifras
//saco la primera cifra como cociente ("corriendo la coma") de dividir el dni por 10000000
//repito con las demás, ajustando con los valores anteriores.
int pri = DNI / 10000000;
int seg = (DNI / 1000000) - pri*10;
int ter = (DNI / 100000) - (DNI / 1000000)*10;	
int cua = (DNI / 10000) - (DNI / 100000)*10;
int qui = (DNI / 1000) - (DNI / 10000)*10;
int sex = (DNI / 100) - (DNI / 1000)*10;
int sep = (DNI / 10) - (DNI / 100)*10;
int oct = (DNI / 1) - (DNI / 10)*10;
	

/*-----Paso 1-----*/
int suma = ((pri*3)+(seg*2)+(ter*7)+(cua*6)+(qui*5)+(sex*4)+(sep*3)+(oct*2));


/*-----Paso 2-----*/
if(sexo == "hombre"){
	suma += 10;
}
if(sexo == "mujer"){
	suma += 38;
}

/*-----Paso 3-----*/
int resto = suma % 11;

/*-----Paso 4-----*/
if (resto == 1){
	if  (sexo == "hombre"){
	prefijo = 23;
	sufijo = 9;	
	}
	if  (sexo == "mujer"){
		prefijo = 23;
		sufijo = 4;
	}
}

/*-----Paso 5-----*/
if (resto == 0){
	if  (sexo == "hombre"){
	prefijo = 20;
	sufijo = 0;	
	}
	if  (sexo == "mujer"){
		prefijo = 27;
		sufijo = 0;
	}
}

/*-----Paso 6-----*/
if ((resto != 0) && (resto != 1)){
	if  (sexo == "hombre"){
	prefijo = 20;
	sufijo = 11-resto;	
	}
	if  (sexo == "mujer"){
		prefijo = 27;
		sufijo = 11-resto;
	}
}

cout << "El CUIL solicitado es: " << prefijo << "-" << DNI << "-" << sufijo << endl;

return 0;
}


