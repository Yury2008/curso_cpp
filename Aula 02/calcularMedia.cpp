#include <iostream>

int main()
{
    float nota1, nota2, nota3, media;
    char nome[50];

    std::cout << "Insira seu nome: ";
    std::cin >> nome;

    std::cout << "Insira a primeira nota: ";
    std::cin >> nota1;

    std::cout << "Insira a segunda nota: ";
    std::cin >> nota2;

    std::cout << "Insira a terceira nota: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout << "\nNome: " << nome << std::endl;
    std::cout << "Nota 1: " << nota1 << std::endl;
    std::cout << "Nota 2: " << nota2 << std::endl;
    std::cout << "Nota 3: " << nota3 << std::endl;
    std::cout << "Média: " << media << std::endl;
}