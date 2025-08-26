#include <iostream>
#include <string>

int main()
{
    std::string palavra;
    int qtdA = 0, qtdE = 0, qtdI = 0, qtdO = 0, qtdU = 0, qtdLetra = 0;
    float porcentagem;

    std::cout << "Informe o palavra: ";
    std::cin >> palavra;

    for(int i = 0; i < palavra.size(); i++)
    {
        if (palavra.at(i) == 'A' || palavra.at(i) == 'a')
        {
            qtdLetra++; qtdA++; 
        } 
        else if (palavra.at(i) == 'E' || palavra.at(i) == 'e')
        {
            qtdLetra++; qtdE++;
        } 
        else if (palavra.at(i) == 'I' || palavra.at(i) == 'i')
        {
            qtdLetra++; qtdI++;
        } 
        else if (palavra.at(i) == 'O' || palavra.at(i) == 'o')
        {
            qtdLetra++; qtdO++;
        } 
        else if (palavra.at(i) == 'U' || palavra.at(i) == 'u')
        {
            qtdLetra++; qtdU++;
        }
        else qtdLetra++;
    }
    porcentagem = ((qtdA + qtdE + qtdI + qtdO + qtdU) / (float)qtdLetra) * 100;
    std::cout << "Quantidade de aparições:" << std::endl;
    std::cout << "Letra 'a': " << qtdA << std::endl;
    std::cout << "Letra 'e': " << qtdE << std::endl;
    std::cout << "Letra 'i': " << qtdI << std::endl;
    std::cout << "Letra 'o': " << qtdO << std::endl;
    std::cout << "Letra 'u': " << qtdU << std::endl;
    std::cout << "As vogais representam " << porcentagem << "% do texto.";
}