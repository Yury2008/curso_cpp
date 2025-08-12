#include <iostream>

int main()
{
    int numero;
    std::cout << "Insira um número: ";
    std::cin >> numero;

    std::cout << "Os 10 primeiros múltiplos de " << numero << "são: ";
    for(int i = 1; i < 11; i++)
    {
        if ((i * numero) % numero == 0) std::cout << i * numero << " ";
    }
}