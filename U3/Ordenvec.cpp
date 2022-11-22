#include <iostream>
using namespace std;

void Ordenar(int x[],int v){
    int a,b,c;
    do{
        c=0;
        for (int i = 0; i < v; i++)
        {
            b=i+1;
            if (x[i]>x[b])
            {
                a=x[b]; x[b]=x[i]; x[i]=a;
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
