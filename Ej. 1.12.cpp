#include <iostream>
#include <string.h>
using namespace std;
/*Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), 
que finaliza con un Nombre= �FIN�, 
informar el nombre de la persona con mayor edad y el de la mas joven. 
Utilizar la funci�n strcmp (<cstring>) para evaluar fin de datos.*/
int main(){
	char nombre[36], fin[4] = "FIN";
	char nom_vie[36];
	char nom_jov[36];
	int fecha, anio, mes, dia;
	int fecha_joven = -100000000, fecha_viejo = 100000000;
	
	do{
	cout << "Ingrese el nombre. O FIN para terminar: " << endl;
	cin >> nombre;
	
	if((strcmp(nombre, fin)) != 0){
	
	cout << "Ingrese la fecha de nacimiento (AAAAMMDD): " << endl;
	cin >> fecha;
	
	/*-----------------CHEQUEO DE FECHA V�LIDA----------------------------------------*/
	//separo a�o, mes y d�a.
	if ((fecha < 99991231) && (fecha > -99991231)){
	
		anio = fecha / 10000;
		mes = (fecha / 100) - (anio * 100);
		dia = fecha - ((anio*10000) + (mes*100));
		
		if((mes > 12) || (mes < 1)){
			cout << "Fecha invalida" << endl;
		}
		else
		
		//meses de 30 d�as
		if (((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) && ((dia < 1) || (dia > 30))){ 
			
		cout << "Fecha invalida" << endl;

	}	
		else //febrero
		if((mes == 2) && ((dia < 1) || (dia > 28))){ 
		
		cout << "Fecha invalida" << endl;
		}
		
		else //meses de 31 d�as
		if (((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) && ((dia < 1) || (dia > 31))){ 
		
		cout << "Fecha invalida" << endl;
		
	}
	/*-----------------SI LA FECHA ES V�LIDA----------------------------------*/	
 	else
	if(fecha > fecha_joven){ //la cifra m�s grande es la del m�s joven
		fecha_joven = fecha; //guarda la fecha del m�s joven
		strcpy(nom_jov, nombre); //y su nombre
	}
	//la cifra m�s chica es del m�s viejo
	if(fecha < fecha_viejo){
		fecha_viejo = fecha;
		strcpy(nom_vie, nombre);
				
			}
		
		
	}
}
}
	//mientras no se escriba 'FIN', sigue pidiendo nombres
	while ((strcmp(nombre, fin)) != 0);
	
cout << "El mayor es: " << nom_vie << endl;
cout << "El mas joven  es: " << nom_jov << endl;
	
return 0;
}

