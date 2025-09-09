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
    std::cout << "Valor estoque: " << valorEstoque() << std::endl;
}

};

int main()
{
    Produto produto;

    std::cout << "Digite o nome do produto: ";
    getline(std::cin, produto.nome);
    std::cout << "Digite o preço: ";
    std::cin >> produto.preco;
    std::cout << "Digite a quantidade: ";
    std::cin >> produto.quantidade;
    std::cout << std::endl;
    
    produto.mostrarDados();
}