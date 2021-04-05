// Alumno: Messa Mamdujano, Fabricio Arián
//2.  Crear la animación que la persona suba y baje la escalera dos veces.

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

    int l = 3, p;

    for (int i = 0; i < 2; i++)
    {
        std::cout << "Ingresa tu posicion: ";
        std::cin >> p;

        system("cls");
        Escalera(l, p);
    }
    
    system("pause");
    return 0;

}