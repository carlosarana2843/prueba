
#ifndef INTERCAMBIO_H
#define INTERCAMBIO_H
#include<iostream>

using namespace std;

class Intercambio{
    
    private: //atributos
        int num1,num2;
        
public:
    Intercambio(int,int);
    
    void intercambio();
};

Intercambio::Intercambio(int a1, int a2){
    
    num1=a1;
    num2=a2;
}


void Intercambio::intercambio(){
     
    int a1,a2;
    
    cout<<" Intercambiando datos su primer numero es: "<<a2<<endl;
    cout<<" Intercambiando datos su segundo numero es: "<<a1<<endl;
}
        
        


#endif /* INTERCAMBIO_H */

