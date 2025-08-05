#include <iostream>

int main()
{
    int numero, numero2;

    std::cout << "Insira o 1º número: ";
    std::cin >> numero;
    
    std::cout << "Insira o 2º número: ";
    std::cin >> numero2;
    
    if(numero > numero2) std::cout << "O primeiro número digitado (" << numero << ") é maior.";

    else std::cout << "O segundo número digitado (" << numero2 << ") é maior.";

    return 0;
}