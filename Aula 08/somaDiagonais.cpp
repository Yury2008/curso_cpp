#include <iostream>

int main() 
{
    int qtdLinhas, qtdColunas, maiores = 0, menores = 0;
    int matriz[100][100];
    float diagonalPrincipal = 0, diagonalSecundaria = 0;
    
    std::cout << "Linhas: ";
    std::cin >> qtdLinhas;
    std::cout << "Colunas: ";
    std::cin >> qtdColunas;
    
    if((qtdLinhas == qtdColunas) && (qtdLinhas > 0 && qtdLinhas <= 100) && (qtdColunas > 0 && qtdColunas <= 100))
    {
        for(int i = 0; i < qtdLinhas; i++)
        {
            for(int j = 0; j < qtdColunas; j++)
            {
                std::cout << "[" << i + 1 << "][" << j + 1 << "]: ";
                std::cin >> matriz[i][j];
                
                
                if(i == j) diagonalPrincipal += matriz[i][j];
                if(matriz[i][j] > 0) maiores++;
                if(matriz[i][j] < 0) menores++;
            }
        }
        
        for (int i = 0; i < qtdLinhas; i++) 
        {
            for (int j = 0; j < qtdColunas; j++) 
            {
                if (j == qtdColunas - 1 - i) diagonalSecundaria += matriz[i][qtdColunas - 1 - i]; 
            }
        }
        
        std::cout << "\nMatriz formada:" << std::endl;
        for(int i = 0; i < qtdLinhas; i++)
        {
            for(int j = 0; j < qtdColunas; j++)
            {
                std::cout << matriz[i][j] << " ";
            }
            std::cout << std::endl;
        }
        
        std::cout << "A diagonal principal e secundaria tem valor(es) " << diagonalPrincipal << " e " << diagonalSecundaria << " respectivamente" << std::endl;
        
        std::cout << "A matriz possui " << menores << " numero(s) menor(es) que zero." << std::endl;
        
        std::cout << "A matriz possui " << maiores << " numero(s) maior(es) que zero.";
    }
    
    else std::cout << "A diagonal principal e secundaria nao pode ser obtida.";
    
    return 0;
}