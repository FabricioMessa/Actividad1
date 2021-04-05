//Alumno: Messa Mandujano, Fabricio Arián
//3. Generar una escalera doble con animación de tamaño npeldanhos. Es decir, la cantidad de peldaños ahora es variable.

#include <iostream>

int Escalera(int x, int y){

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

}

int main(){

    int l, p;

    std::cout << "Ingrese el numero de las gradas: ";
    std::cin >> l;

    for (int i = 0; i < l + 1; i++)
    {
        std::cout << "Ingresa tu posicion: ";
        std::cin >> p;

        system("cls");
        Escalera(l, p);
    }
    
    system("pause");
    return 0;

}