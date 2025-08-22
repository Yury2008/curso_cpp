#include <iostream>

void crescente(int numero, int i)
{
    if(numero <= i) return;

    if(i % 2 == 0) std::cout << i << " ";
    crescente(numero, i + 1);
}

void decrescente(int numero)
{
    if(numero < 0) return;

    if(numero % 2 == 0) std::cout << numero << " ";
    decrescente(numero - 1);
}

int main()
{
    int n;

    std::cout << "Informe o valor de N: ";
    std::cin >> n;

    std::cout << "Crescente:" << std::endl;
    crescente(n, 0);

    std::cout << "\nDecrescente:" << std::endl;
    decrescente(n);
}