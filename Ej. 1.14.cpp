#include <iostream>
using namespace std;
/*Un buque de carga traslada 100 contenedores a tres diferentes puertos del pais. 
Los puertos se identifican con los numeros 1, 2 y 3. 
De cada contenedor que el buque traslade se registran los siguientes datos: 
*Identificacion del contenedor (entero) 
*Peso del contenedor en kg (entero) 
*Puerto de arribo(un valor de 1 a 3). 

Se pide calcular e informar: 
i. El peso total que el buque debe trasladar 
ii. La identificacion del contenedor de mayor peso 
iii. La cantidad de contenedores que debe trasladar a cada puerto*/

int main(){
	int i, id, peso, puerto;
	int peso_total = 0, peso_max = 0, id_max;
	int cant_1 = 0, cant_2 = 0, cant_3 = 0;
	
	for(i=0; i<100; i++){ //registro cada uno de los 100 input. Probé con 4
		cout << "Ingrese el id del contenedor: ";
		cin >> id;
		
		cout << "Ingrese el peso del contenedor: ";
		cin >> peso;
		while(peso <= 0){//mientras el n° sea negativo, sigo pidiendo peso
		cout << "Numero invalido." << endl;	
		cout << "Ingrese el peso del contenedor: ";
		cin >> peso;
		}
		
		peso_total += peso;
		if(peso > peso_max){ //guardo el peso máximo
			peso_max = peso;
			id_max = id; //con su id
		}
		
		cout << "Ingrese el puerto de arribo del contenedor(1, 2 o 3): ";
		cin >> puerto;
		while((puerto < 1) || (puerto > 3)){//mientras el n° sea inválido, sigo pidiendo n° de puerto
			cout << "Numero invalido." << endl;
			cout << "Ingrese el puerto de arribo del contenedor(1, 2 o 3): ";
			cin >> puerto;
		}
		
		if(puerto == 1){//cuento cantidad según n° de puerto
			cant_1++;
		}
		else{
			if(puerto == 2){
			cant_2++;
			}
			else{
			cant_3++;
				
			}
		}
		
	}
	
cout << "El peso total del buque es: " << peso_total << endl;
cout << "La identificacion del contenedor de mayor peso es: " << id_max << endl;
cout << "En el puerto 1 deben dejarse " << cant_1 << " contenedores." << endl;
cout << "En el puerto 2 deben dejarse " << cant_2 << " contenedores." << endl;
cout << "En el puerto 3 deben dejarse " << cant_3 << " contenedores." << endl;

return 0;
}

