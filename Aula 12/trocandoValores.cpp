#include <iostream>

void troca(int *a, int *b)
{
    int troca = *a;
    *a = *b;
    *b = troca;

    std::cout << "Depois da troca: a = " << *a << ", b = " << *b;
}

int main()
{
    int a, b;
    
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    std::cout << "Antes da troca: a = " << a << ", b = " << b << std::endl;
    troca(&a, &b);
}