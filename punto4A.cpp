/*
 * Nombre del archivo: ParcialA.cpp, punto 4. 
 * Descripcion: Este programa lleva la nómina de una empresa, a la cual se le puede ingresar y consultar empleados
 *              cómo también los informes de estos.
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 20 / Marzo / 2017 
 */
 
 
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;




void agregarProducto(map<string, double> &inventario, string producto, double cantidad ){
	for(map<string, double>::iterator it=inventario.begin(); it!=inventario.end(); ++it){
		if((it->first.compare(producto))==0){
			it->second += cantidad;
		
		}
		else{
			inventario[producto]=cantidad;
		}
		
	}
}

void venta(map<string, double> &inventario, map<string, double> &ventas, string producto, double cantidad){
	for(map<string, double>::iterator it=inventario.begin(); it!=inventario.end(); ++it){
		if((it->first.compare(producto))==0 && it->second > 0){
			it->second -= cantidad;
		}
		
	}	
		
	for(map<string, double>::iterator it=ventas.begin(); it!=ventas.end(); ++it){
		if((it->first.compare(producto))==0){
			it->second += cantidad;
		}
		
		else{
			cout<<"ERROR"<<endl;
		}
	}
}		


int main(){
	
	string producto = "235";
	double cantidad = 20;
	
	string producto1= "234";
	double cantidad1 = 10;
	
	map<string, double> inventario;
	inventario["234"]=23;
	
	map<string, double> ventas;
	ventas["234"]=50;
	
	
	cout<<"AgregarProducto"<<endl;
	agregarProducto(inventario, producto, cantidad);
	agregarProducto(inventario, producto1, cantidad1);
	
	for(map<string, double>::iterator it=inventario.begin(); it!=inventario.end(); ++it){
		cout<<it->first << "-->" << it->second << '\n' << endl;
	}
	
	cout<<"Venta"<<endl;
	venta(inventario, ventas, producto, cantidad);	
	venta(inventario, ventas, producto1, cantidad1);	
	for(map<string, double>::iterator it=ventas.begin(); it!=ventas.end(); ++it){
		cout<<it->first << "-->" << it->second << '\n' << endl;
	}
	
	
	
}
