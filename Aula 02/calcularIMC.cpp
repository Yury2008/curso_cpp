#include <iostream>

int main()
{
    char nome[50];
    float peso, imc, altura;

    std::cout << "Insira o seu nome: ";
    std::cin >> nome;

    std::cout << "Insira o seu peso: ";
    std::cin >> peso;

    std::cout << "Insira a sua altura em metros: ";
    std::cin >> altura;

    imc = peso / (altura * altura);

    std::cout << "\nNome: " << nome << std::endl;
    std::cout << "Peso: " << peso << "kg" << std::endl;
    std::cout << "Altura: " << altura << "m" << std::endl;

    if(imc > 18.5 && imc < 24.9)
    {
        std::cout << nome << "seu IMC é " << imc << " - Peso Normal.\n";
    }

    else
    {
        std::cout << nome << " seu IMC é " << imc << " - Fora da Faixa.\n";
    }
}