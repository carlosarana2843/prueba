
#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>

using namespace std;


class Prom{
    private: //atributos
        int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
       
        
    public: //Metodos
        
        Prom(int,int,int,int,int,int,int,int,int,int);
        
        void prom();
    
};

Prom::Prom(int _num1,int _num2,int _num3,int _num4,int _num5,
             int _num6,int _num7,int _num8,int _num9,int _num10){
    
    num1=_num1;
    num2=_num2;
    num3=_num3;
    num4=_num4;
    num5=_num5;
    num6=_num6;
    num7=_num7;
    num8=_num8;
    num9=_num9;
    num10=_num10;
    
}


void Prom::prom(){
    
    int _prome;
    
    _prome=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
    
    cout<<"La media de los numeros ingresados es: "<<_prome<<endl;
    
}
   

#endif /* MEDIA_H */

