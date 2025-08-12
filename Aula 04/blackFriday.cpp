#include <iostream>

int main()
{
    float precoSemDesconto, precoComDesconto;
    int verificados = 0, contador = 0;

    while (contador < 5)
    {
        std::cout << "Produto " << contador + 1 << "(Sem desconto): ";
        std::cin >> precoSemDesconto;
        std::cout << "Produto " << contador + 1 << "(Com desconto): ";
        std::cin >> precoComDesconto;

        if(precoComDesconto <= (precoSemDesconto * 0.8))
        { 
            verificados++;
        }

        std::cout << "\n";
        contador++;
    }

    std::cout << "No total, " << verificados << " produtos tiveram um desconto de pelo menos 20%.";
}