#include "Ordenes.h"
//#include "Inventario.h"
#include <iostream>
using namespace std;


Ordenes::Ordenes(){
    float * cantidades;
    productos * producto;
    id=0;
    Clientes c("<Nombre cliente>", "<Direccion>", "<RFC>");
    Inventario  inv(cantidades, producto, 0);
    inventarios=inv;
    cliente=c;
    total= 0;
    formapago="Efectivo";

}



Ordenes::Ordenes(int i, Inventario in, Clientes cl, float t, string fp){
    id=i;
    inventarios=in;
    cliente=cl;
    total = t;
    formapago=fp;
}

void Ordenes::agregarProducto(string c, int cant, Inventario in_total){
    int it=in_total.buscarProductos(c);
    if(it>=0){
        if(in_total.cantidades[it]>cant){
            inventarios.agregarProducto(in_total.producto[it], cant);
        }else{
            cout<<"El producto no se puede agregar ya que no se tiene la cantidad que piden de el"<< endl;

        }
    }else{
        cout<<"El producto no se puede agregar a la orden ya que no esta en el inventario"<< endl;
    }
}

void Ordenes::quitarProducto(string c){
    inventarios.quitarProducto(c);
}

void Ordenes::totalOrden(){
    total=0;
    float precio;
    int cantidad;
    int cantidad_total;
    for (int i=0; i<inventarios.registro_productos; i++){
        precio=inventarios.producto[i].precioventa;
        cantidad=inventarios.cantidades[i];
        total+=(precio*cantidad);

    } 
}




void Ordenes::muestraDatos(){
    totalOrden();
    cout<<"..............................................."<<endl;
    cout<<"Numero de orden: "<<id<<endl;
    cout<<"Cliente:  "<<cliente.nombre<<endl;
    cout<<"Dirección para entrega: "<<cliente.direccion<<endl;
    cout<<"RFC: "<<cliente.rfc<<endl;
    inventarios.imprimirInventario();
    cout<<"Total: $"<<total<<endl;
    cout<<"Forma de pago: "<<formapago<<endl;
    cout<<"................................................"<<endl;

}