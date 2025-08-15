#include <iostream>
#include <cmath>

float volumeEsfera(float raio)
{
    return (4*3.1416*(std::pow(raio, 3)))/3;
}

int main()
{
    float raio;

    std::cout << "Raio da primeira esfera: ";
    std::cin >> raio;
    float esfera1 = volumeEsfera(raio);

    std::cout << "Raio da segunda esfera: ";
    std::cin >> raio;
    float esfera2 = volumeEsfera(raio);

    std::cout << "Raio da terceira esfera: ";
    std::cin >> raio;
    float esfera3 = volumeEsfera(raio);

    std::cout << "Volume da primeira efera: " << esfera1 << std::endl;
    std::cout << "Volume da segunda efera: " << esfera2 << std::endl;
    std::cout << "Volume da terceira efera: " << esfera3;
}