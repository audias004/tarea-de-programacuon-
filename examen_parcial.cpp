#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    string apellido;
public:
    Persona(string _nombre, string _apellido) : nombre(_nombre), apellido(_apellido) {}

    // Métodos get
    string getNombre() { return nombre; }
    string getApellido() { return apellido; }

    // Métodos set
    void setNombre(string _nombre) { nombre = _nombre; }
    void setApellido(string _apellido) { apellido = _apellido; }
};


