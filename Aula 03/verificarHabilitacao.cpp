#include <iostream>

int main()
{
    int anoNascimento, terCarteira, anoatual;

    std::cout << "Insira o ano atual: ";
    std::cin >> anoatual;

    std::cout << "Insira o ano que você nasceu: ";
    std::cin >> anoNascimento;

    while(anoNascimento > anoatual)
    {
        std::cout << "Estamos em " << anoatual << ". É impossível você conseguir viajar ao passado.";   
        std::cout << "Insira o ano que você nasceu: ";
        std::cin >> anoNascimento;
    }

    terCarteira = anoatual - anoNascimento;

    if(terCarteira >= 18) std::cout << "Em" << anoatual << ", você terá " << terCarteira << "anos e você poderá tirar a habilitação.";

    else std::cout << "Em" << anoatual << ", você terá " << terCarteira << "anos e ainda não poderá tirar a habilitação.";

    return 0;
}