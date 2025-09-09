#include <iostream>

int main()
{
    int x;
    int *p = &x;

    std::cout << "Digite um valor para x: ";
    std::cin >> x;
    std::cout << "Valor original de x: " << x << std::endl;
    std::cout << "Valor de x acessado pelo ponteiro: " << *p << std::endl;

    std::cout << "Digite um novo valor para x através do ponteiro: ";
    std::cin >> *p;
    std::cout << "Novo valor de x após alteração pelo ponteiro: " << *p;
}