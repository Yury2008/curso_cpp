#include <iostream>

int main()
{
    int numeros[10];

    for(int i = 0; i < 10; i++)
    {
        std::cout << "Informe o " << i + 1 << " número: ";
        std::cin >> numeros[i];
    }

    std::cout << "\nSequência de 10 números:" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << numeros[i] << " ";
    }

    std::cout << "\nSequência na ordem inversa:" << std::endl;
    for(int i = 9; i >= 0; i--)
    {
        std::cout << numeros[i] << " ";
    }
}