#include <iostream>
using namespace std;
/*Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. 
De cada infracción se tomó nota de los siguientes datos: 
- Tipo de Infracción (1, 2, 3, o 4) 
- Motivo de la Infracción 
- Valor de la multa (un entero) 
- Gravedad de la infracción (‘L’,‘M’, ‘G’) 

Se pide informar al final del proceso: 
• Los valores totales de la multa a pagar de acuerdo al tipo de gravedad. 
• La leyenda “Clausurar fabrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.*/



int main(){
 	int i, valor, tipo;
	char gravedad, motivo[501];
	int total_L = 0, total_M = 0, total_G = 0, clausura = 0;
 	
 for(i=1; i<5; i++){ //usé i<5 para probar
 	cout << "Ingrese el tipo de infraccion (1, 2, 3 o 4): ";
	cin >> tipo;
	
	if(tipo < 1 || tipo > 4){
		cout << "Numero invalido. La infraccion no podra procesarse." << endl;
	}
	else{
		
	cout << "Ingrese el motivo de la multa: ";
	cin >> motivo;
 
 	cout << "Ingrese el valor de la multa: ";
	cin >> valor;
	
	if(valor < 0){
		cout << "Numero invalido. La infraccion no podra procesarse." << endl;
	}
	else{
	
	cout << "Ingrese la gravedad de la multa: ";
	cin >> gravedad;
	
	if ((gravedad != 'L') && (gravedad != 'M') && (gravedad != 'G')){
	cout << "Letra invalida. La infraccion no podra procesarse." << endl;
			}
	else{ //guardo el valor y lo sumo al total según la gravedad
		if (gravedad == 'L'){
			total_L += valor;
		}
		else{
		if (gravedad == 'M'){
			total_M += valor;
		}
		else{ //si es G y el tipo es 3 o 4, sumo 1 a clausura
		if (gravedad == 'G'){
			total_G += valor;
			if(tipo == 3 || tipo == 4){
				clausura++;
			}
		}
		}
	}

	}
}
}
}

cout << "El total a pagar por infracciones leves es: " << total_L << endl; 
cout << "El total a pagar por infracciones medias es: " << total_M << endl;
cout << "El total a pagar por infracciones graves es: " << total_G << endl;
if(clausura > 3){
cout << "Clausurar fabrica." << endl;
}

return 0;
}












