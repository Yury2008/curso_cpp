#include <iostream>

int main()
{
    int numeros[11], iguaisN = 0;

    for(int i = 0; i < 11; i++)
    {
        std::cout << "Informe o " << i + 1 << "º número: ";
        std::cin >> numeros[i];
    }

    for(int i = 0; i < 11; i++)
    {
        if(numeros[i] == numeros[10])
        {
            iguaisN++;
        }
    }

    if(iguaisN > 0)
    {
        std::cout << "\nO número " << numeros[10] << " apareceu " << iguaisN << " vez(es):" << std::endl;
        for(int i = 0; i < 11; i++)
        {
            if(numeros[i] == numeros[10])
            {
                std::cout << "- " << i << std::endl;
            }
        }
    }

    else std::cout << "Não tem números iguais a " << numeros[10];
}