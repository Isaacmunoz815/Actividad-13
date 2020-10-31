#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<float> arreglo;

    for(size_t i=0; i < 10; i++){
        arreglo.insertar_final(i);
    }

    arreglo.insertar_final(1);
    arreglo.insertar_final(8);
    arreglo.insertar_inicio(6);
    arreglo.insertar_inicio(2);

    for(size_t i=0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
    
    arreglo.Insertar(5,2);

    for(size_t i=0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.eliminar_final();
    arreglo.eliminar_inicio();
    arreglo.eliminar(1);

    for(size_t i=0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;






    


    

    cout << endl;

    return 0;
}