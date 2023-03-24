#include "Prom.h"


int main() {

    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    
    cout<<"Ingrese numero 1: "<<endl;
    cin>>n1;
    cout<<"Ingrese numero 2: "<<endl;
    cin>>n2;
    cout<<"Ingrese numero 3: "<<endl;
    cin>>n3;
    cout<<"Ingrese numero 4: "<<endl;
    cin>>n4;
    cout<<"Ingrese numero 5: "<<endl;
    cin>>n5;
    cout<<"Ingrese numero 6: "<<endl;
    cin>>n6;
    cout<<"Ingrese numero 7: "<<endl;
    cin>>n7;
    cout<<"Ingrese numero 8: "<<endl;
    cin>>n8;
    cout<<"Ingrese numero 9: "<<endl;
    cin>>n9;
    cout<<"Ingrese numero 10: "<<endl;
    cin>>n10;

    Prom r1(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);
    
    r1.prom();

    return 0;
}

