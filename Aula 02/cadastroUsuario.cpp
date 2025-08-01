#include <iostream>

int main()
{
    char nome[50];
    int idade;
    float peso;
    char genero;

    std::cout << "Insira o seu nome: ";
    std::cin >> nome;
    
    std::cout << "Insira a sua idade: ";
    std::cin >> idade;
    
    std::cout << "Insira o seu peso: ";
    std::cin >> peso;
    
    std::cout << "Gênero (M/F): ";
    std::cin >> genero;

    std::cout << "\nNome: " << nome << "\n";
    std::cout << "Idade: " << idade << "\n";
    std::cout << "Peso: " << peso << "kg\n";
    std::cout << "Gênero: " << genero << "\n";
}