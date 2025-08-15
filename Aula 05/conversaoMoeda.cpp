#include <iostream>

void converterMoeda()
{
    float real, cotacaoDolar, valorDolar;

    std::cout << "Valor em real: ";
    std::cin >> real;

    std::cout << "Cotação do dólar: ";
    std::cin >> cotacaoDolar;

    valorDolar = real / cotacaoDolar;

    std::cout << "A cotação de R$" << real << " para dólar é US$" << valorDolar;
}

int main()
{
    converterMoeda();
}