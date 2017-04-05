/*
 * nombre del archivo: punto3a.cpp
 * descipcion: convierte un numero de base 10 a base 8 y lo retorna 
 * Autores: Daniel Mejia Velez -> 1663916
 * 			Javier Alexis Orozco -> 1663928
 * 			Carlos Daniel Marin -> 1663787
 * Fecha de creacion: Abril/ 05 /2017 
 * Ultima fecha de modificacion: Abril/ 05 /2017
 * */




#include <iostream>  
#include <string>
#include <sstream>

using namespace std;


string convertir(int n){
		
		string valor="";
		
		while(n >= 8){
			int acum;
			stringstream convert;
			acum= n%8;
			convert << acum;
			valor+=convert.str();
			
			acum=0;
			n= n/8;
		
		}
		
		
		stringstream convert2;
		convert2 << n;
		valor.append(convert2.str());
		
		string valor2="";
		
		for(int i = valor.length()-1; i >= 0; i--){
			
			valor2+=valor[i];
		}
		

		
		return valor2;		
}




int main(){
	
	int numero1=0;
	cout<<"ingrese un numero: "<<endl;
	cin>>numero1;
	
	
	string resultado;
	resultado = convertir(numero1);
	
	cout<<"su numero en base 8 es: "<<resultado<<endl;

	return 0;
}
