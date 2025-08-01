#include <iostream>

int main()
{
    float valorProduto, desconto, pagamentoVista, parcelado, comissaoVista, comissaoParcelado;

    std::cout << "Insira o valor do produto: ";
    std::cin >> valorProduto;

    desconto = valorProduto * 0.05;
    pagamentoVista = valorProduto - desconto;
    parcelado = valorProduto / 5 + ((valorProduto / 5) * 0.10);
    comissaoVista = pagamentoVista * 0.06;
    comissaoParcelado = valorProduto * 0.06;

    std::cout << "\nValor do produto: R$" << valorProduto << std::endl;
    std::cout << "À vista: R$" << pagamentoVista << std::endl;
    std::cout << "Parcelado (5x): R$" << parcelado << std::endl;
    std::cout << "Comissão à vista: R$" << comissaoVista << std::endl;
    std::cout << "Comissão parcelado: R$" << comissaoParcelado << std::endl << std::endl;
}