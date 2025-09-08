#include <iostream>

struct Produto
{
std::string nome;
float preco;
int quantidade;

Produto(std::string nome, float preco, int quantidade)
{
    this->nome = nome;
    this->preco = preco;
    this->quantidade = quantidade;
}

Produto()
{
    nome = "Indefinido";
    preco = 0.0;
    quantidade = 0;
}
};

int main()
{
    Produto produto3;

    std::cout << "Digite o nome do produto: ";
    getline(std::cin, produto3.nome);
    std::cout << "Digite o preço: ";
    std::cin >> produto3.preco;
    std::cout << "Digite a quantidade: ";
    std::cin >> produto3.quantidade;
    std::cout << std::endl;
    
    Produto produto1;
    std::cout << "Produto 1:" << std::endl;
    std::cout << "Nome: " << produto1.nome << std::endl;
    std::cout << "Preço: " << produto1.preco << std::endl;
    std::cout << "Quantidade: " << produto1.quantidade << std::endl;
    std::cout << "---------------------" << std::endl;

    Produto produto2("Caneta", 2.5, 10);
    std::cout << "Produto 2:" << std::endl;
    std::cout << "Nome: " << produto2.nome << std::endl;
    std::cout << "Preço: " << produto2.preco << std::endl;
    std::cout << "Quantidade: " << produto2.quantidade << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << "Produto 3:" << std::endl;
    std::cout << "Nome: " << produto3.nome << std::endl;
    std::cout << "Preço: " << produto3.preco << std::endl;
    std::cout << "Quantidade: " << produto3.quantidade << std::endl;
    std::cout << "---------------------" << std::endl;
}