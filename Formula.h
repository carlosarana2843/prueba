

#include <iostream>
#include<math.h>
using namespace std;

class Formula{
    private:
        int a,b,c;
    
    public:
    
        Formula(int,int,int);
        void formula();
       
};

Formula::Formula(int _a,int _b,int _c){
    
    a=_a;
    b=_b;
    c=_c;
}

void Formula::formula(){
    
    int _resultpos,_resultneg;
            
    _resultpos=(-b+sqrt((b*b)-4*a*c))/(2*a);        
    _resultneg=(-b-sqrt((b*b)-4*a*c))/(2*a);

    cout<<"El resultado positivo de la formula es: "<<_resultpos<<endl;
    cout<<"El resultado negativo de la formula es: "<<_resultneg<<endl;
}

