#include <iostream>
using namespace std;
#include "productos.h"

productos::productos(){
    codigo= "<Código>";
    nombre="<Nombre producto>";
    preciocompra=0;
    precioventa=0;
    peso=0;
    tamano=0;

}

productos::productos(string c,string n,float pc, float pv, float p, float t){
    codigo=c;
    preciocompra=pc;
    precioventa=pv;
    peso=p;
    tamano=t;
    nombre=n;
}

void productos::imprimirProducto(){
        cout<<"Código del producto: "<<codigo<<endl;
        cout<<"Producto: "<<nombre<<endl;
        cout<<"Precio de venta: $"<<precioventa<<endl;
        cout<<"Peso: "<<peso<<"kg"<<endl;
        cout<<"tamano: "<<tamano<<"m"<<endl;
    }
    

