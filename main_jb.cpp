#include <iostream>
#include <string>
#include "clase_1.h"
#include "clase_2.h"
#include "clase_3.h"
using namespace std;

int main(){
    short nivel;
    cout<<"Teclea: \n 1.Nube / 2.Rosas / 3. Girasoles"<<endl;
    cin>>nivel;
    if (nivel ==1)
    {flor_nube flor_1 = flor_nube("Gypsophila paniculata",4, 100.31);
    flor_1.n_especie();

    flor_nube flor_2 = flor_nube ("Gypsophila paniculata",4, 100.31);
    flor_2.n_edad ();

    flor_nube flor_3 = flor_nube ("Gypsophila paniculata",4, 100.31);
    flor_3.n_tamaño ( );
        /* code */
    }
    if (nivel==2){
        flor_rosa flor_1 = flor_rosa("Rosa spp",20, 2.7);
    flor_1.n_especie();

    flor_rosa flor_2 = flor_rosa ("Rosa spp",20, 2.7);
    flor_2.n_edad ();

    flor_rosa flor_3 = flor_rosa ("Rosa spp",20, 2.7);
    flor_3.n_tamaño ( );

    }
    if (nivel == 3){
        flor_girasol flor_1 = flor_girasol("Rosa spp",20, 2.7);
    flor_1.n_especie();

    flor_girasol flor_2 = flor_girasol("Rosa spp",20, 2.7);
    flor_2.n_edad ();

    flor_girasol flor_3 = flor_girasol ("Rosa spp",20, 2.7);
    flor_3.n_tamaño ( );
    }

     
            
            
        
}