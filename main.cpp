#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, massimo;
    cout<<"Scrivi il primo numero"<<endl;
    cin>>num1;
    cout<<"Scrivi il secondo numero"<<endl;
    cin>>num2;
    cout<<"Scrivi il terzo numero"<<endl;
    cin>>num3;
    if(num1>num2)
    {
       if(num1>num3)
       {
        massimo=num1;
       }
       else
       {
        massimo=num3;
       }
    }
    else
    {
        if(num2>num3)
        {
            massimo=num2;
        }
        else
        {
            massimo=num3;
        }
    }
    cout<<"il numero massimo è "<<massimo;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
