#include "Inventario.h"
#include <iostream>
using namespace std;

Inventario::Inventario(){
    cantidades= new float[100];
    producto= new productos[100];
    registro_productos=0;
}

Inventario::Inventario(float * cant, productos * prod, int r_p){
    cantidades=cant;
    producto=prod;
    registro_productos=r_p;
}

int Inventario::buscarProductos(string c){
    for (int i=0; i<=registro_productos; i++){
        if(producto[i].codigo==c){
            return i;
        }
    }
    return -1;
}

void Inventario::agregarProducto(productos pro, int cant){
    producto[registro_productos]=pro;
    cantidades[registro_productos]=cant;
    registro_productos +=1;
}

void Inventario::quitarProducto(string c){
    if(registro_productos>0){
        int i = buscarProductos(c);
        if(i>=0){
            producto[i]=producto[registro_productos-1];
            cantidades[i]=cantidades[registro_productos-1];
            producto[registro_productos-1]=producto[registro_productos];
            cantidades[registro_productos-1]=0;

            registro_productos--;
            cout<<"Se ha borrado el producto"<<endl;
        }else{
            cout<<"Producto no encontrado"<<endl;
        }   
    }else{
        cout<<"No hay productos"<<endl;
    }
}

void Inventario::modificarProducto(string c, int cant){
    int i=buscarProductos(c);
    cantidades[i]=cant;
}

void Inventario::imprimirInventario(){
    for (int i=0; i<registro_productos; i++){
        producto[i].imprimirProducto();
        cout<<"Cantidad: "<<cantidades[i]<<endl;       
    }

}