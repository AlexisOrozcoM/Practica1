/*
 * nombre del archivo: punto4B.cpp
 * descipcion: convierte un numero de base 10 a base 8 y lo retorna 
 * Autores: Daniel Mejia Velez -> 1663916
 * 			Javier Alexis Orozco -> 1663928
 * 			Carlos Daniel Marin -> 1663787
 * Fecha de creacion: Abril/ 05 /2017 
 * Ultima fecha de modificacion: Abril/ 05 /2017
 * */



 
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void agregarEmpleado(map<int, double> &empleado, int cc ){
	for(map<int, double>::iterator it=empleado.begin(); it!=empleado.end(); ++it){
		if(it->first == cc){
			cout<<"ERROR"<<"  el empleado: "<<cc<<"  Ya existe"<<endl;
		
		}
		else{
			empleado[cc]=0.0;
		}
		
	}
}

void vender(map<int, double> &empleado, map<string, double> &venta, string producto,int cc, double totalV){
	for(map<int, double>::iterator it=empleado.begin(); it!=empleado.end(); ++it){
		if(it->first == cc){
			it->second += totalV;
		}
		
	}	
		
	for(map<string, double>::iterator it=venta.begin(); it!=venta.end(); ++it){
		if((it->first.compare(producto))==0){
			totalV += it->second;
		}
		
		else{
			venta[producto] = totalV;
		}
	}
}		

int main(){
	
	int cedula = 23456;
	//double totalVentas = 20;
	
	int cedula1= 12345;
	//double totalVentas1 = 34.5;
	
	string producto1 = "234";
	double totalVenta1 = 35;
	
	string producto = "236";
	double totalVenta = 20;
	
	map<int, double> empleado;
	empleado[23456] = 23.5;
	
	map<string, double> venta;
	venta["234"] = 50;
	
	
	cout<<"AgregarEmpleado"<<endl;
	agregarEmpleado(empleado, cedula);
	agregarEmpleado(empleado, cedula1);
	
	for(map<int, double>::iterator it=empleado.begin(); it!=empleado.end(); ++it){
		cout<<"Empleado->"<<it->first << "--> Total Venta:" << it->second << '\n' << endl;
	}
	
	cout<<"Venta"<<endl;
	vender(empleado, venta, producto, cedula, totalVenta);	
	vender(empleado, venta, producto1, cedula1, totalVenta1);	
	for(map<string, double>::iterator it=venta.begin(); it!=venta.end(); ++it){
		cout<<"Producto->"<<it->first << "--> Total Venta:" << it->second << '\n' << endl;
	}
	
	
	
	return 0;
}
