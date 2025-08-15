#include <iostream>

int menuTipos(int opcao)
{
    std::cout << "========== APARTAMENTOS ==========\n";
    std::cout << "1 - Individual\n";
    std::cout << "2 - Suíte Dupla\n";
    std::cout << "3 - Suíte Tripla\n";
    std::cout << "==================================\n";
    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;
    return opcao;
}

void hospedagemIndividual(int qtdDias)
{
    std::cout << "Informe a quantidade de dias: ";
    std::cin >> qtdDias;

    if(qtdDias >= 3) std::cout << "O valor total a ser pago vai ser de R$" << ((125-(125*0.15))*qtdDias);
    else std::cout << "O valor total a ser pago vai ser de R$" << 125*qtdDias;
}

void hospedagemDupla(int qtdDias)
{
    std::cout << "Informe a quantidade de dias: ";
    std::cin >> qtdDias;

    if(qtdDias >= 3) std::cout << "O valor total a ser pago vai ser de R$" << ((140-(140*0.15))*qtdDias);
    else std::cout << "O valor total a ser pago vai ser de R$" << 140*qtdDias;
}

void hospedagemTripla(int qtdDias)
{
    std::cout << "Informe a quantidade de dias: ";
    std::cin >> qtdDias;

    if(qtdDias >= 3) std::cout << "O valor total a ser pago vai ser de R$" << ((180-(180*0.15))*qtdDias);
    else std::cout << "O valor total a ser pago vai ser de R$" << 180*qtdDias;
}

int main()
{
    int opcao, qtdDias;

    int escolha = menuTipos(opcao);

    if(escolha == 1) hospedagemIndividual(qtdDias);
    else if(escolha == 2) hospedagemDupla(qtdDias);
    else if(escolha == 3) hospedagemTripla(qtdDias);
    else std::cout << "Opção inválida";
}