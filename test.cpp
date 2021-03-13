#include <iostream>
#include "Ordenes.h"
using namespace std;

int main(){
    float * cantidades;
    productos * producto;
    cantidades = new float[100];
    producto = new productos[100];

    float * cantidades2;
    productos * producto2;
    cantidades2 = new float[100];
    producto2 = new productos[100];

    Inventario inventarioTienda(cantidades, producto, 0);
    Inventario inventarioOrden(cantidades2, producto2, 0);

    productos p1("D1234", "Sofa cama", 2000, 2700, 23, 11);
    productos p2("D9856", "Reposet", 1200, 1550, 6, 9);
    productos p3("C5674", "Buro", 400, 600, 4, 4);
    productos p4("C4321", "Cabecera", 550, 900, 10, 13);
    productos p5("A9276", "Armario Grande", 2500, 3100, 7, 18);
    productos p6("A6734", "Armario Pequeno", 1800, 2450, 4, 10);
    productos p7("T7598", "Comedor 10 personas", 4000, 5000, 20, 6);
    productos p8("T3252", "Comedor 6 personas", 2500, 3300, 12, 3);

    Clientes c1("Natalia Rodriguez", "La Jolla 21, Hermosillo", "ROGN9534551N0");
    Clientes c2("Juan Peralta", "Lomas 204, Hermosillo", "PERJ0347864F3");
    Clientes c3("Roberto Pesqueira", "Encantada 34, Guadalajara", "PEFR7656893T2");

    //Ordenes  
    Ordenes o1(1, inventarioOrden, c1, 0, "Efectivo");

     // Ordenes(int i, Inventario in, Clientes cl, float t, string fp);


    inventarioTienda.agregarProducto(p1, 8);
    inventarioTienda.agregarProducto(p2, 4);
    inventarioTienda.agregarProducto(p3, 15);
    inventarioTienda.agregarProducto(p4, 3);
    inventarioTienda.agregarProducto(p5, 10);
    inventarioTienda.agregarProducto(p6, 10);
    inventarioTienda.agregarProducto(p7, 5);
    inventarioTienda.agregarProducto(p8, 8);

    inventarioTienda.modificarProducto("D1234", 14);

    inventarioTienda.quitarProducto("C4321");

    inventarioTienda.imprimirInventario();

    o1.agregarProducto("A6734", 5, inventarioTienda);

    o1.muestraDatos();


    return 0;
}