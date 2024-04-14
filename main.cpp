#include ¨cliente.cpp¨
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingresar nit:";
	cin>>nit;
	cout<<"ingresar nombres:";
	cin>>nombres;
	cout<<"ingresar apellidos:";
	cin>>apellidos;
	cout<<"ingresar direccion:";
	cin>>direccion;
	cout<<"ingresar telefono:";
	cin>>telefono;
	// instancia de un objeto 
	/*cliente obj = cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"ingresar nit:";
	cin>>nit; 	
	obj.setnit(nit);
	obj.mostrar();*/
	cliente obj = cliente();
	obj.setnit(nit);
	obj.setnombres(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	obj.mostrar();
}
