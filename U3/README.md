# UNIT 3 
Jorge Antonio Ruiz Esparza Galván 
# In this unit we did a lot of programs using the new functions and facilities that the teacher taught us. 
![Sora1](Imagenes/Sora1.gif) 

On this readme i will put 9 programs we made during the class 
# 1 Bisección 
```
 #include <iostream>
 #include <cmath>
 using namespace std;

double FuncionEcuacion1(double x){
    return (pow(x,2)-8*x+15);
}

int main(){
    double x1=-10;
    double x2=4.5;
    double xm,y1,y2;

    double Es=0.00001;
    double Er=abs(x2-x1);
    
    int i=1;
    while (Er>Es){
        xm=(x1+x2)/2;
        y1=FuncionEcuacion1(x1);
        y2=FuncionEcuacion1(xm);
        if (y1*y2 <0 ){
            x2=xm;
        } else {
            x1=xm;
        }
        Er=abs(x2-x1);
        i=i+1;
    }
    cout<<"i = "<<i<<" raiz = "<<xm<<endl;
    cout<<"... Hecho";
    return 0;
} 
``` 
![biseccion](Imagenes/Biseccion.png) 
# 2 Año bisiesto 
``` 
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
``` 
![Añobisiesto](Imagenes/Añobisiesto.png) 
# 3 Coseno 
``` 
#include <iostream>
#include <math.h>
using namespace std;

double G2R(double g){
    double r;
    r=g*M_PI/180;
    return r;
}

long int factorial(int x){
    int factorial=1;
    while (x>0)
    {
        factorial=factorial*x;
        x--;
    }
    return factorial;
}

double coseno(double g, int i){
    double c;
    c=pow(-1,i)*pow(G2R(g),2*i)/(factorial(2*i));
    return c;
}

int main(){
    int g;
    double x1=10;
    double Es=0.00001;
    double c=0;

    double Er=x1-c;
    int i=0;
    cout<< "Escribe los grados: " << endl;
    cin>>g;

    while(Er>Es){
        x1=c;
        c=c+coseno(g,i);
        Er=abs(x1-c);
        i++;
    }  
    
    cout<<"El coseno de "<<g<<" grados es: "<<c;
    return 0;
} 
``` 
![Coseno](Imagenes/Coseno.png) 
# 4 Desviación estandar 
``` 
#include <iostream>
#include <math.h>
using namespace std;
 
 double media(double x[],int n){
    double media=0;
    for (int i = 0; i < n; i++)
    {
        media=media+x[i];
    }
    media=media/n;
    return media;
 }

 double desviacion(double x[], int n){
   double me= media(x,n);
   double des=0;
   for (int i = 0; i < n; i++)
   {
      des=des+pow(x[i]-me,2);
   }
   des=sqrt(des/n);
   return des;
 }

 int main(){
    double numeros[]={600,470,170,430,300};
    int n;
    n=sizeof(numeros)/8;
    cout<<"Media: "<<media(numeros,n)<<endl;
    cout<<"Desviacion estandar: "<<desviacion(numeros,n);
    return 0;
 } 
 ``` 
 ![Desviacion](Imagenes/Desviacion.png) 
 # 5 Desgloce de moneda 
 ``` 
 #include<iostream>
using namespace std;
int main(){
    int dinero =8358, i=0;
    int cambio[10]={1000,500,200,100,50,20,10,5,2,1};
    while (dinero>0)
    {
        if (dinero>=cambio[i])
        {
            cout<<dinero/cambio[i]<< " billetes de  " <<cambio[i]<<endl;
            dinero=dinero%cambio[i];
        }
        i++;
    }
    return 0;
}
``` 
![Moneda](Imagenes/Moneda.png) 
# 6 Numeros romanos
``` 
#include <iostream>
using namespace std;

int main(){
    int n;
    int v;
    int romanos[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string NR[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string numero="";
    int i=0;
    cout << "Escribe el numero a convertir: " << endl;
    cin >> n;
    while(n>0)
    {
        if (n>=romanos[i])
        {
            v=n/romanos[i];
            n=n%romanos[i];
            for (int j = 0; j < v; j++)
            {
                numero=numero+NR[i];
            }
        }
        i++;
    }
    cout<<numero;
    return 0;
} 
``` 
![Numerosrom](Imagenes/Numerosrom.png) 
# 7 RFC 
``` 
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string nombre="Carlos";
    string AP="Esparza";
    string AM="Lopez";
    string fe="17/11/2022";
    string rfc="";
    int v=nombre.length(); 
    int p=0;
    AP[0]=tolower(AP[0]);
    
    for (int i = 0; i < v && p<2; i++)
    {
        if (AP[i]=='a' || AP[i]=='e' || AP[i]=='i' || AP[i]=='o' || AP[i]=='u' )
        {
            rfc=rfc+AP[i];
            p++;
        }  
    }
    AP[0]=toupper(AP[0]);

    int d1=fe.find_last_of("/");
    int d2=fe.find("/");
    rfc=rfc+AM[0]+nombre[0]+fe.substr(d1+1,4)+fe.substr(d2+1,2)+fe.substr(0,2);
    
    v=rfc.length();
    for (int i = 0; i < v; i++)
    {
        rfc[i]=toupper(rfc[i]);
    }
    cout<<nombre<<" RFC: "<<rfc;
    return 0;
}
``` 
![RFC](Imagenes/RFC.png) 
# 8 Vector 
For this program I used the metod of bubble accommodation and its function is to compare 2 values and them changes in case to be necesary. The program ends once all the numbres are in order.
``` 
#include <iostream>
using namespace std;

void Ordenar(int x[],int v){
    int m,s,c;
    do{
        c=0;
        for (int i = 0; i < v; i++)
        {
            s=i+1;
            if (x[i]>x[s])
            {
                m=x[s]; x[s]=x[i]; x[i]=m;
                c++;
            }   
        }
        
    } while(c>0);
}

int main(){
    int c[]={9,8,7,6,5,4,3,2,1,0};
    int n=sizeof(c)/4;
    Ordenar(c,n);
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<endl;
    }
    return 0;
} 
``` 
![Ordenvec](Imagenes/Ordenvec.png) 
# 9 Funcion factorial 
``` 
#include <iostream>
using namespace std;

double factorial(int numero){
    if (numero == 1){
        return 1;
    }else{
        return numero*factorial(numero-1);
    }
}

int main(){
    int n=6, f;
    f=factorial(n);
    cout<<"El factorial de "<<n<<" es "<<f;
} 
``` 
![Funcion](Imagenes/Funcionfact.png) 
![Sora2](Imagenes/Sora2.gif) 













 


    
