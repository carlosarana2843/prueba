
#include "Suma.h"


int main(){
    
    int primero,segundo;
    
    cout<<"Ingrese primer numero: "<<endl;
    cin>>primero;
    
    cout<<"Ingrese segundo numero: "<<endl;
    cin>>segundo;
    
    Suma n1(primero,segundo);
    
    n1.suma();
                    
    
    return 0;
    
    
}
