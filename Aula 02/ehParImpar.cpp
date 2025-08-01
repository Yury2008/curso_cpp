#include <iostream>

int main()
{
    int numero;

    std::cout << "Insira um número: ";
    std::cin >> numero;

    std::cout << (numero % 2 == 0 ? "Eh Par" : "Eh Ímpar") << std::endl;
}