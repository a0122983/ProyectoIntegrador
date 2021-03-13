#include "productos.h"

class Inventario
{
//private:
public:
    float * cantidades;
    productos * producto;
    int registro_productos;
    Inventario();
    Inventario(float * cant, productos * prod, int r_p);
    int buscarProductos(string c);
    void agregarProducto(productos pro, int cant);
    void modificarProducto(string c, int cant);
    void quitarProducto(string c);
    void imprimirInventario();
    
};
