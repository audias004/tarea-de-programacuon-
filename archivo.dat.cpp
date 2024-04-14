#include <iostream>
using namespace std;
const char *nombre_archivo ="archivo.dat";
struct Estudiante{
	int codigo;
	char nombres [50];
	char apellidos[50];
	int telefonno;
};
void leer();
void crear();
void Actualizar();
void Borrar();
main() {
	leer();
	crear();
	Borrar();
	actualizar();
	  system("pause ");
}
void leer(){
	 system("cls");
	 FILE* archivo = fopen(nombre_archivo,"rb");
	 if (!archivo){
	 	archivo = fopen(nombre_archivo,"w+b");
	 }
	 Estudiante estudiante;
	 int id=0; // indice o pocision del registro(fila) dentro del archivo
	 fread(&estudiante,sizeof(Estudiante),1,archivo);
	 cout<<"______________________________________________________________"<<endl;
	 cout<<"ID"<<"|"<<"Codigo"<<"|"<<"Nombres"<<"|"<<"Apellidos"<<"|"<<"Telefono"<<endl;
	 do{
	 	cout<<id<<"|"<<estudiante.codigo<<"|"<<estudiante.nombres<<"|"<<estudiante.apellidos<<"|"<<estudiante.telefonno<<endl;
	 	fread(&estudiante,sizeof(Estudiante),1,archivo);
	 	fclose(archivo);
		 id+=1;
	 }while(feof(archivo)==0);
}
void crear(){
	FILE* archivo = fopen(nombre_archivo,"a+b");
	char res;
	Estudiante estudiante;
	do{
		fflush(stdin);
		cout<<"Ingrese Codigo:";
		cin>>estudiante.codigo;
		cin.ignore();
	
		cout<<"Ingrese Nombres:";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos:";
		cin.getline(estudiante.apellidos,50);
		
		cout<<"Ingrese Telefono:";
		cin>>estudiante.telefonno;
		
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		cout<<"Desea ingresar otro estudiante(s/n)";
		cin>>res;
	}while(res==' s' || res==' S'); 
	fclose(archivo);
	leer();
	
	
	 }
	 void Actualizar(){
	FILE* archivo = fopen(nombre_archivo,"r+b");
	Estudiante estudiante;
     int id=0;
     cout<<"ingrese el id que desea modificar:";
     cin>>id;
     fseek(archivo,id * sizeof(Estudiante),SEEK_SET);
	
		cout<<"Ingrese Codigo:";
		cin>>estudiante.codigo;
		cin.ignore();
	
		cout<<"Ingrese Nombres:";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos:";
		cin.getline(estudiante.apellidos,50);
		
		cout<<"Ingrese Telefono:";
		cin>>estudiante.telefonno;
		
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
	
	fclose(archivo);
	leer();
}
	void Borrar(){
		const char *nombre_archivo_temp = "archivo_temp.data";
		FILE* archivo_temp = fopen(nombre_archivo,"w+b");
		FILE* archivo = fopen(nombre_archivo_temp,"rb");
		Estudiante estudiante;
		int id=0,i_n=0;
		cout<< "ingrese el id a eliminar:";
		cin>>id;
		while(fread(&estudiante,sizeof(Estudiante),1,archivo)){
			if ( id_n !=id ){
				fwrite(&estudiante,sizeof(Estudiante),1,archivo_temp);
			}
			id_n++
		}
		flcose(archivo);
		flcose(archivo_temp);
		
		
		archivo_temp = fopen(nombre_archivo,"rb");
		archivo_temp = fopen(nombre_archivo_temp,"wb");
		while(fread(&estudiante,sizeof(Estudiante),1,archivo_temp)){
			fwrite(&estudiante,sizeof(Estudiante),1,archivo);
			
			}
			fclose(archivo);
			fclose(archivo_temp);
			leer();
	}
	
	 

