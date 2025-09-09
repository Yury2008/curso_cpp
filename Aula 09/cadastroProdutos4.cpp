#include <iostream>

struct Data
{
int dia;
int mes;
int ano;
};

struct Produto
{
std::string nome;
float preco;
int quantidade;
Data validade;

Produto(std::string nome, float preco, int quantidade, Data validade)
{
    this->nome = nome;
    this->preco = preco;
    this->quantidade = quantidade;
    this->validade = validade;
}

Produto()
{
    nome = "Indefinido";
    preco = 0.0;
    quantidade = 0;
    validade = {00, 00, 0000};
}

float valorEstoque()
{
    return preco * quantidade;
}

void mostrarDados()
{
    std::cout << "Produto:" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Preço: " << preco << std::endl;
    std::cout << "Quantidade: " << quantidade << std::endl;
    std::cout << "Validade: " << validade.dia << "/" << validade.mes << "/" << validade.ano << std::endl;
    std::cout << "Valor estoque: " << valorEstoque() << std::endl;
    std::cout << std::endl;
}

};

int main()
{
    Produto produto[3];

    std::cout << "Digite o nome do produto: ";
    getline(std::cin, produto[2].nome);
    std::cout << "Digite o preço do produto: ";
    std::cin >> produto[2].preco;
    std::cout << "Digite a quantidade do produto: ";
    std::cin >> produto[2].quantidade;
    std::cout << "Digite a data de validade (dia mes ano): ";
    std::cin >> produto[2].validade.dia >> produto[2].validade.mes >> produto[2].validade.ano;
    std::cout << std::endl;
    
    for(int i = 0; i < 3; i++)
    {
        if(i == 0)
        {
            produto->mostrarDados();
        }

        else if(i == 1)
        {
            produto[i] = {"Caneta", 2.5, 10, {10, 10, 2025}};
            produto[i].mostrarDados();
        }

        else
        {
            produto[i].mostrarDados();
        }
    }
}