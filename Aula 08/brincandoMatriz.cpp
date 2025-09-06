#include <iostream>

int main() 
{
    int matriz[3][3], soma = 0, menor = 100, qtdPositivos = 0, somaPositivos = 0;
    float media;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
            
            if(i != j) soma += matriz[i][j];
            
            if(matriz[i][j] > 0) qtdPositivos++; somaPositivos += matriz[i][j];
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    
    std::cout << "Matriz formada:" << std::endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    media = somaPositivos / qtdPositivos;
    
    std::cout << "Média dos números positivos: " << media << std::endl;
    std::cout << "Menor número: " << menor << std::endl;
    std::cout << "Valor de delta: ";
    if(matriz[2][2] % 2 == 0) std::cout << "1" << std::endl;
    else std::cout << "0" << std::endl;
    std::cout << "Soma: " << soma; 
    
    return 0;
}