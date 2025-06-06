#include <iostream>
using namespace std;

int main(){

    int puntaje;

    cout<<"Ingrese su puntaje de estrellas";
    cin>>puntaje;

    switch (puntaje)
    {
    case 1:
     cout<<"Exelente tuviste un desempeño increible, sigue asi.";
        break;
    case 2:
     cout<<"Muy bien lo estas haciendo genial, felicidades";
     break;
    case 3:
    cout<<"Felicidades es un muy buen puntaje de estrellas";
        break;
    case 4:
    cout<<"No te rindas puedes mejorar";
    break;
    case 5:
    cout<<"Vamos se que puedes, esfuerzate mas";
    break;
    
    default:
        break;
    }
    


    
return 0;
    }