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
