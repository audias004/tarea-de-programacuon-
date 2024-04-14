#include <iostream>
#include <string>
using namespace std;

class Docente : public Persona {
private: 
    string materia;
public:
    Docente(string _nombre, string _apellido, string _materia) : Persona(_nombre, _apellido), materia(_materia) {}

    // Método leer_clase
    void leer_clase() {Materia
        cout << "Nombre: " << getNombre() << endl;
        cout << "Apellido: " << getApellido() << endl;
        cout << ": " << materia << endl;
    }
};

int main() {
    Docente profesor("audias", "flores", "programacion");
    profesor.leer_clase();
    return 0;
}

