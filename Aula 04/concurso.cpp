#include <iostream>

int main()
{
  int acertosPortugues, acertosMatematica, aprovados = 0, candidatos = 1;
  float redacao;

  while(true)  
  {
    std::cout << "Candidato " << candidatos << ": " << std::endl;
    
    std::cout << "Português: ";
    std::cin >> acertosPortugues;
    if(acertosPortugues < 0) break;

    std::cout << "Matemática: ";
    std::cin >> acertosMatematica;

    std::cout << "Redação: ";
    std::cin >> redacao;

    std::cout << "\n";

    candidatos++;
    if(acertosPortugues >= 40 && acertosMatematica >= 21 && redacao >= 7) aprovados++;
  }
  std::cout << aprovados << " de " << candidatos << " cadidato(s) aprovado(s).";
}