#include <iostream>

class Carro
{
private:
    std::string marca, modelo;
    int ano, codigo;
    float preco, percentual;

public:
    Carro()
    {
        marca = "sem marca";
        modelo = "sem modelo";
        ano = 0;
        preco = 0;
        percentual = 0;
        codigo = 0;
    }

    Carro(std::string marca, std::string modelo, int ano, float preco, float percentual, int codigo)
    {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->preco = preco;
        this->percentual = percentual;
        this->codigo = codigo;
    }

    void setMarca(std::string marca) { this->marca = marca; }
    std::string getMarca() { return marca; }

    void setModelo(std::string modelo) { this->modelo = modelo; }
    std::string getModelo() { return modelo; }

    void setAno(int ano) { this->ano = ano; }
    int getAno() { return ano; }

    void setPreco(float preco) { this->preco = preco; }
    float getPreco() { return preco; }

    void setPercentual(float percentual) { this->percentual = percentual; }
    float getPercentual() { return percentual; }

    void setCodigo(int codigo) { this->codigo = codigo; }
    int getCodigo() { return codigo; }

    float calcularDesconto()
    {
        return preco - (preco * (percentual / 100));
    }

    void mostrarDados()
    {
        std::cout << "Marca: " << getMarca()
                  << " | Modelo: " << getModelo()
                  << " | Ano: " << getAno()
                  << " | Preço: " << getPreco()
                  << std::endl;
    }
};

void carroDesconto(Carro carros[], int n)
{
    int idBuscar;
    float percentual_temp;

    std::cout << "\nDigite o percentual de desconto: ";
    std::cin >> percentual_temp;

    std::cout << "Digite o índice do carro para aplicar desconto (0 até " << n - 1 << "): ";
    std::cin >> idBuscar;

    if (idBuscar >= 0 && idBuscar < n)
    {
        carros[idBuscar].setPercentual(percentual_temp);
        std::cout << "\nCarro selecionado:\n";
        carros[idBuscar].mostrarDados();
        std::cout << "Preço com desconto: " << carros[idBuscar].calcularDesconto() << std::endl;
    }
    else
    {
        std::cout << "Índice inválido!" << std::endl;
    }
}

int main()
{
    Carro carros[10];
    int n;

    std::cout << "Quantos carros deseja cadastrar? ";
    std::cin >> n;
    std::cin.ignore();

    if (n >= 1 && n <= 10)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "\n---------- Cadastro do " << i + 1 << "º carro ----------" << std::endl;
            carros[i].setCodigo(i);

            std::cout << "Digite a marca: ";
            std::string marca_temp;
            std::getline(std::cin, marca_temp);
            carros[i].setMarca(marca_temp);

            std::cout << "Digite o modelo: ";
            std::string modelo_temp;
            std::getline(std::cin, modelo_temp);
            carros[i].setModelo(modelo_temp);

            std::cout << "Digite o ano: ";
            int ano_temp;
            std::cin >> ano_temp;
            carros[i].setAno(ano_temp);

            std::cout << "Digite o preço: ";
            float preco_temp;
            std::cin >> preco_temp;
            carros[i].setPreco(preco_temp);

            std::cin.ignore();
        }

        std::cout << "\nLista de carros cadastrados:" << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << "[" << i << "] ";
            carros[i].mostrarDados();
        }

        carroDesconto(carros, n);
    }
    else
    {
        std::cout << "Quantidade inválida (mínimo 1 e máximo 10)." << std::endl;
    }

    return 0;
}