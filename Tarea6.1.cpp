#include <iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};/*
main() {
	 Estudiante estudiante;
	 for (int i=0;i<4;i++){
	 }
	 cout<<"Ingresar Codigo:";
	 cin>>estudiante.codigo;
	 cin.ignore();
	 cout<<"Ingrediante Nombre Completo:";
	 getline(cin,estudiante.nombre);
	 cout<<"Ingresar nota:"
	 cin>>estudiante.nota;
	 
	 cout<<"Codigo:"<<estudiante.codigo<<endl;
	 cout<<"Nombre Completo:"<<estudiante.nombre<<endl;
	 cout<<"Nota:"<<estudiante.nota<<endl;
	*/
	
	main(){
		Estudiante estudiante;
		
		int fila =0,columna = 0;
		cout<<"Cuantos Estudiantes desea Agregar";
		cin>>fila;
		estudiante.codigo = new int [fila];
		estudiante.nombre = new int [fila];
		estudiante.notas = new int [fila];
		for (int i=0;i<fila;i++){
			estudiante.notas[i] = new int[columnas];
		}
	cout<<"___________________Ingrese de notas_____________________"<<endl;
	for(int ii=0;i<fila;columna;ii++){
		
	}
	
	system("pause");
}
