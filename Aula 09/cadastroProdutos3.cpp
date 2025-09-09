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
    std::cout << std::endl;
    
    for(int i = 0; i < 3; i++)
    {
        if(i == 0)
        {
            produto->mostrarDados();
        }

        else if(i == 1)
        {
            produto[i] = {"Caneta", 2.5, 10};
            produto[i].mostrarDados();
        }

        else
        {
            produto[i].mostrarDados();
        }
    }
}