/*
 * nombre del archivo: punto3a.cpp
 * descipcion: retorna una letra de acuerdo a los valores numericos que se ingresan
 * Autores: Daniel Mejia Velez -> 1663916
 * 			Javier Alexis Orozco -> 1663928
 * 			Carlos Daniel Marin -> 1663787
 * Fecha de creacion: Abril/ 05 /2017 
 * Ultima fecha de modificacion: Abril/ 05 /2017
 * */




#include<iostream>  

using namespace std;

char conversion(int a, int b){
	char letra;
	if( (b > 0) && (a > 0)){
		letra = 'c';
	}
	else if( b < 0){
		if((a > 5) || (b < (-5))){
			letra = 'd';
		}
		else if((a <= 5) || (b > 5)){
			letra = 'f';
		}
		else{
			letra = 'k';
		}
	}
	
	else if((a > 0) && (b == 0)){
			letra = 'ú';
	}
	else{
		letra = 'v';
	}
	return letra;
}


int main(){
	int numero1;
	int numero2;
	cout<<"ingrese el primer numero: "<<endl;
	cin>> numero1;
	cout<<"ingrese el segundo numero: "<<endl;
	cin>> numero2;
	
	char resultado;
	
	resultado = conversion(numero1, numero2);
	
	cout<<"la letra que resulta es: "<<resultado<<endl;
	


	return 0;
}





