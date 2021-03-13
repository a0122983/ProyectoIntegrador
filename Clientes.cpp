#include <iostream>
#include "Clientes.h"
using namespace std;

Clientes::Clientes(){
    nombre="<Nombre cliente>";
    direccion="<Direccion>";
    rfc="<RFC>";
}

Clientes::Clientes(string n, string d, string r){
    nombre=n;
    direccion=d;
    rfc=r;
}

/*void Clientes::agregarCliente(string n, string d, string r){
    
}

void Clientes::modificarCliente(string n, string d, string r){
    
}

void Clientes::quitarCliente(string n, string d, string r){
    
}*/