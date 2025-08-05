#include <iostream>

int main()
{
    int idade, altura, totalBrinquedos;

    std::cout << "Informe a sua altura(cm): ";
    std::cin >> altura;

    std::cout << "Informe a sua idade: ";
    std::cin >> idade;

    if(altura < 140 || idade < 12) std::cout << "Você não pode ir em nenhum brinquedo";
    
    else
    {
        std::cout << "Você pode andar nos brinquedos:" << std::endl;
        if(altura >= 170 && idade >= 16)
        {
            std::cout << "- Barca Viking" << std::endl;
            std::cout << "- Elevador da Morte" << std::endl;
            std::cout << "- Final Killer" << std::endl;

            totalBrinquedos = 3;

            std::cout << "Um total de " << totalBrinquedos << " de 3 brinquedos.";
        }

        else if(altura >= 150 && idade >= 14)
        {
            std::cout << "- Barca Viking" << std::endl;
            std::cout << "- Elevador da Morte" << std::endl;

            totalBrinquedos = 2;

            std::cout << "Um total de " << totalBrinquedos << " de 3 brinquedos.";
        }

        else if(altura >= 150 && idade >= 12)
        {
            std::cout << "- Barca Viking" << std::endl;

            totalBrinquedos = 1;

            std::cout << "Um total de " << totalBrinquedos << " de 3 brinquedos.";
        }

        else if(altura >= 140 && (idade >= 14 && idade <= 16))
        {
            std::cout << "- Elevador da Morte" << std::endl;

            totalBrinquedos = 1;

            std::cout << "Um total de " << totalBrinquedos << " de 3 brinquedos.";
        }

        else
        {
            std::cout << "- Final Killer" << std::endl;

            totalBrinquedos = 1;

            std::cout << "Um total de " << totalBrinquedos << " de 3 brinquedos.";
        }
    }
}