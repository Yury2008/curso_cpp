#include <iostream>

void classificarAluno(float media, int qtdFaltas)
{
    std::cout << "Informe sua média: ";
    std::cin >> media;
    
    while(media > 10 || media < 0)
    {
        std::cout << "A média deve ser de 0 a 10.";
        std::cout << "Informe sua média: ";
        std::cin >> media;
    }

    std::cout << "Informe a quantidade de faltas: ";
    std::cin >> qtdFaltas;

    if(qtdFaltas > 10) std::cout << "Reprovado por faltas";
    else if(media >= 9.5) std::cout << "Aprovado com louvor";
    else if(media >= 7) std::cout << "Aprovado";
    else std::cout << "Reprovado";
}

int main()
{
    float media;
    int qtdFaltas;

    classificarAluno(media, qtdFaltas);
}