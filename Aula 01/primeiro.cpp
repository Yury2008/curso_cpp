#include <iostream>

int main()
{
    int idade;
    std::cout << "Sua idade: ";
    std::cin >> idade;
    std::cout << "Sua idade é " << idade << std::endl;

    if(idade >= 120 || idade <= 0)
    {
        std::cout << "Não é possível essa idade";
    }

    else if(idade >= 18)
    {
        std::cout << "Você é de maior";
    }

    else
    {
        std::cout << "Você é de menor";
    }
    return 0;
}