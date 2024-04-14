#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    string apellido;
public:
    Persona(string _nombre, string _apellido) : nombre(_nombre), apellido(_apellido) {}

    // M�todos get
    string getNombre() { return nombre; }
    string getApellido() { return apellido; }

    // M�todos set
    void setNombre(string _nombre) { nombre = _nombre; }
    void setApellido(string _apellido) { apellido = _apellido; }
};

class Docente : public Persona {
private:
    string materia;
public:
    Docente(string _nombre, string _apellido, string _materia) : Persona(_nombre, _apellido), materia(_materia) {}

    // M�todo leer_clase
    void leer_clase() {
        cout << "Nombre: " << getNombre() << endl;
        cout << "Apellido: " << getApellido() << endl;
        cout << "Materia: " << materia << endl;
    }
};

int main() {
    Docente profesor("Juan", "Perez", "Matem�ticas");
    profesor.leer_clase();
    return 0;
}

