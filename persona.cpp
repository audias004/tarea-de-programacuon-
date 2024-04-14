#include <iostream>
using namespace std;
class Persona{
    // atributos
	protected : string nombres,apellidos,direccion;
	         int telefono;
    // constructo
    protected :
    	persona(){
		}
		persona(string nom,string ape,string dir,int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
	    // metodos 
	    void mostrar ()
};
