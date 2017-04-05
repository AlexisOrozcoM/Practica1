/*
 * Nombre del archivo: Parcial 2, punto 3 
 * Descripcion: Asigna una letra dependiendo de los numeros asignados
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 05 / Abril / 2017 
 * Ultima fecha de modificacion: 05  / Abril / 2017
 */

#include <iostream>

using namespace std;


int funcion (int a, int b, int c){
	
	if( a > 0 && b > 0){
		return 2*c;
		}
		else if( a < 0 ){
			
			if( b > 5 || b < -5){
				return 5*c;
				}
				else if ( a <= 5 && b > 5){
					return 5*c;
					}
					else {
						return 4*c;
						}
					}
					else if(b == 0 && a==0){
						return 5*c;
						}
						else {
							return c;
							}
			}



int main(){
	
	int num1;
	int num2;
	int num3;
	
	cout << "Ingrese el primer numero" << endl;
	cin >> num1;
	cout << "Ingrese el segundo numero" << endl;
	cin >> num2;
	cout << "Ingrese el tercer numero" << endl;
	cin >> num3;
	
	int cambio;
	
		cambio = funcion(num1, num2, num3);
		
		cout << "La letra asignada de acuerdo a los parametros es: " << cambio << endl;
	}
