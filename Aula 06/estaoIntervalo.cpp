#include <iostream>

int main()
{
    int numeros[10], intervalo20e30 = 0;

    for(int i = 0; i < 10; i++)
    {
        std::cout << "Informe o " << i + 1 << "º número: ";
        std::cin >> numeros[i];
        if(numeros[i] > 20 && numeros[i] < 30) intervalo20e30++;
    }

    if(intervalo20e30 > 0)
    {
        std::cout << "\nOs números que estão no intervalo [20;30] são: " << std::endl;
        for(int i = 0; i < 10; i++)
        {
            if(numeros[i] > 20 && numeros[i] < 30)
            {
                std::cout << "- " << numeros[i] << std::endl;
            }
        }
        std::cout << "\nNo total, "  << intervalo20e30 << " de 10 números." << std::endl;
    }
    else std::cout << "\nNão tem número no intervalo [20;30]";
}