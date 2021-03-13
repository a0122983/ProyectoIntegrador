#include <string>
using namespace std;

class productos
{
//private:
    
public:
    string codigo;
    string nombre;
    float preciocompra;
    float precioventa;
    float peso;
    float tamano;
    productos();
    productos(string c, string n, float pc, float pv, float p, float t);
    void imprimirProducto();

};

