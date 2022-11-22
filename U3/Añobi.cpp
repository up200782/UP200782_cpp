#include <iostream>
using namespace std;

bool Bisiesto(int año){
    bool r;
    r = año%400==0 || año%4==0 && año%100!=0;
    return r;
}

int main(){
int año;
cout<<"Ingresa un año: " << endl;
cin>>año;
if(Bisiesto(año)){
    cout<<año<< endl << " Bisiesto" << endl;
} else{
    cout<<año<< endl << " no Bisiesto" << endl;
}
return 0;
}
