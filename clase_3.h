
//Arturo López García
//Proyecto jardín botanico
//Pensamiento Computacional Orientado a Objetos 
//Clase 2 Rosas

//Librerias 
#include <iostream>
#include <string>
using namespace std;

class flor_girasol {
    private: //atributos
        std::string especie;
        int edad;
        float tamaño ;
        
       
    public: //metodos 
        flor_girasol (string,int, float);//Constructor

        void n_especie ();
        void n_edad();
        void n_tamaño ();
        
};
//constructor (Inicializa los atributos)
flor_girasol::flor_girasol (std::string _especie,int _edad, float _tamaño) {
    especie = _especie;
    edad = _edad;
    tamaño= _tamaño;
   
}
//Funciones
void flor_girasol::n_especie(){
    cout<<"El nombre de la especie es " <<especie<<"."<<endl;
}
void flor_girasol::n_edad (){
    cout<<"La edad de la flor es " <<edad<< "."<<endl;
}
void flor_girasol::n_tamaño(){
    cout<<"El tamaño de la flor es " <<tamaño<< " centimentros." <<endl;
}

//Main

int main(){
    flor_girasol flor_1 = flor_girasol("Rosa spp",20, 2.7);
    flor_1.n_especie();

    flor_girasol flor_2 = flor_girasol("Rosa spp",20, 2.7);
    flor_2.n_edad ();

    flor_girasol flor_3 = flor_girasol ("Rosa spp",20, 2.7);
    flor_3.n_tamaño ( );


    

    

    system("pause");
    return 0;

}



