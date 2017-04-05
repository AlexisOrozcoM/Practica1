/*
 * Nombre del archivo: Parcial 1, punto 5 
 * Descripcion: Transforma un numero a binario
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 05 / Abril / 2017 
 * Ultima fecha de modificacion: 05  / Abril / 2017
 */


#include <iostream>
#include <string>
#include <sstream>

using namespace std;


string bina (int n){

	int acum;
	string valor = " ";
	
	while (n >= 2){
		
		stringstream bi1;
		acum = n%2;
		bi1 << acum;
		valor.append(bi1.str());
		
		n = n/2;
		
		}
		stringstream bi2;
		bi2 << n;
		valor.append(bi2.str());
		
		string valor2 = " ";
		
		for(int i = valor.length()-1; i >=0; i --){
			valor2 += valor[i];
			}
		
		return valor2;
  
		
	}

int main(){
	
	
	int numero;
	
	cout << "Ingrese el numero " << endl;
	cin >> numero;
	
	string resul;
	
	resul = bina (numero);
	
	cout << "El numero binario es :" << resul << endl;

	}	
