#include <iostream>

int main()
{
    int canal;
 
    std::cout << "----- CANAIS DE TV -----" << std::endl;
    std::cout << "5 - TV Ponta Verde" << std::endl;
    std::cout << "7 - TV Gazeta" << std::endl;
    std::cout << "11 - TV Pajuçara" << std::endl;
    std::cout << "16 - TV Farol" << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "Digite um numero de um canal de tv: " << std::endl;
    std::cin >> canal;

    switch(canal)
    {
        case 5: std::cout << "TV Ponta Verde" << std::endl; break;
        case 7: std::cout << "TV Gazeta" << std::endl; break;
        case 11: std::cout << "TV Pajuçara" << std::endl; break;
        case 16: std::cout << "TV Farol" << std::endl; break;
        default: std::cout << "Canal inválido" << std::endl; break;
    }
}