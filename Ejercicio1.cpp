#include <iostream>
#include <string>
using namespace std;

int main(){

    int temperatura;

    cout<<"Ingrese la temperatura en grados Celcius";
    cin>>temperatura;

    if (temperatura < 15 ){
        cout<<"La temperatura donde se encuentrea esta fria";

    }else if(temperatura >= 15 && temperatura <= 25){
    cout<<"La temperatura en domnde se encuentra esta templada";
    

    }else{
cout<<"La temperatura en donde se encuentra esta caliente";
    }


    return 0;
}