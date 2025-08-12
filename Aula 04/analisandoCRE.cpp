#include <iostream>

int main()
{
    int qtdInscritos, matricula, menorCRE;
    float cre, soma = 0, menor = 10, media;

    std::cout << "Informe a quantidade de incritos: ";
    std::cin >> qtdInscritos;

    for(int i = 0; i < qtdInscritos; i++)
    {
        std::cout << "Informe o número da matrícula: ";
        std::cin >> matricula;
        
        std::cout << "Informe o número do CRE: ";
        std::cin >> cre;
        while(cre > 10 || cre < 0)
        {
            std::cout << "CRE é válido de 0 a 10." << std::endl;
            std::cout << "Informe o número do CRE: ";
            std::cin >> cre;
        }
        soma += cre;

        if(cre < menor) menor = cre; menorCRE = matricula;

        media = soma / qtdInscritos;
    }
    std::cout << "\nMatrícula do aluno com menor CRE: " << menorCRE << std::endl;
    std::cout << "CRE médio de todos os canditados: " << media;
}