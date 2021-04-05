//Alumno: Messa Mandujano, Fabricio Arián
// 1. Crear una función que imprima una persona P en el peldaño correcto en una escalera doble de tamaño fijo (3 peldaños).
#include <iostream>

int escaleras(int x, int y){

    for (int i = 0; i < x; i++)
    {
        if (y == (i + 1))
        {
            std::cout << "_P_" << "\n";
        }
        else
        {
            std::cout << "___" << "\n";
        }
        for (int j = 0; j < i; j++)
        {
            std::cout << "   ";  
        }
    std::cout << "   |";   
    }

    if (y == 0)
    {
        std::cout << "_P_";
    }
    else
    {
        std::cout << "___";
    }

/*
    for (int i = x - 1; i >= 0; --i)
    {
        for (int j = 0; j <= i * 4; ++j)
        {
            std::cout << " ";
        }
        if (i == y - 1)
        {
            std::cout << "_P_";
        }
        else
        {
            std::cout << "___";
        }
        if (i < x - 1)
        {
            std::cout << "|\n";
        }
        else
        {
            std::cout << "\n";
        }       
    }
*/

}

int main(){

    int e = 3, p;

    std::cout << "Ingrese su posicion (max 3 y min 0): ";
    std::cin >> p;

    escaleras(e, p);
    std::cout << "\n";

    //escaleras2(e, p);

    system("pause");
    return 0;

}