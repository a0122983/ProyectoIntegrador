#include "Clientes.h"
#include "Inventario.h"

class Ordenes
{
//private:


public:
    int id;
    Inventario inventarios;
    Clientes cliente;
    float total;
    string formapago;
    Ordenes();
    Ordenes(int i, Inventario in, Clientes cl, float t, string fp);
    void agregarProducto(string c, int cant, Inventario in_total);
    void quitarProducto(string c);
    void totalOrden();
    void muestraDatos();   

};

