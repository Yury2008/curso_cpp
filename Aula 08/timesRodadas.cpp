#include <iostream>

int main() 
{
    int timeRodada[3][3];
    int somaTimePontos[3] = {0};
    int somaRodadaPontos[3] = {0};
    int pontuacao;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "Time " << i + 1 << " (" << j + 1 << "ª Rodada): ";
            std::cin >> pontuacao;
            somaTimePontos[i] += pontuacao;
            somaRodadaPontos[j] += pontuacao;
        }
    }
    
    std::cout << std::endl;
    std::cout << "Pontuação por time:" << std::endl;
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Time " << i + 1 << ": " << somaTimePontos[i] << " pontos" << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "Pontuação por rodada:" << std::endl;
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Rodada " << i + 1 << ": " << somaTimePontos[i] << " pontos" << std::endl;
    }
    
    return 0;
}