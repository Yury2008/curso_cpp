#include <iostream>

float calcularSalario(float salarioMinimo, int pecasProduzidas)
{
    if(pecasProduzidas > 41) return salarioMinimo + ((pecasProduzidas - 30) * (salarioMinimo * 0.05)); 
    else if(pecasProduzidas >= 31 && pecasProduzidas <= 41) return salarioMinimo + ((pecasProduzidas - 30) * (salarioMinimo * 0.03));
    else return salarioMinimo;
}

int main()
{
    float salarioMinimo, maiorSalario = 0;
    int totalPecas = 0, pecasProduzidas;

    std::cout << "Informe o salário mínimo: ";
    std::cin >> salarioMinimo;

    std::cout << "Informe a quantidade de peças produzidas pelo primeiro operário: ";
    std::cin >> pecasProduzidas;
    totalPecas += pecasProduzidas;
    float salario1 = calcularSalario(salarioMinimo, pecasProduzidas);
    if(maiorSalario < salario1) maiorSalario = salario1;

    std::cout << "Informe a quantidade de peças produzidas pelo segundo operário: ";
    std::cin >> pecasProduzidas;
    totalPecas += pecasProduzidas;
    float salario2 = calcularSalario(salarioMinimo, pecasProduzidas);
    if(maiorSalario < salario2) maiorSalario = salario2;

    std::cout << "Informe a quantidade de peças produzidas pelo terceiro operário: ";
    std::cin >> pecasProduzidas;
    totalPecas += pecasProduzidas;
    float salario3 = calcularSalario(salarioMinimo, pecasProduzidas);
    if(maiorSalario < salario3) maiorSalario = salario3;

    std::cout << "Salário do primeiro operário: R$" << salario1 << std::endl;
    std::cout << "Salário do segundo operário: R$" << salario2 << std::endl;
    std::cout << "Salário do terceiro operário: R$" << salario3 << std::endl;
    std::cout << "Total de peças fabricadas: " << totalPecas << std::endl;
    std::cout << "Media de pecas fabricadas: " << (float)totalPecas / 3 << std::endl;
    std::cout << "Maior salário: " << maiorSalario;
}