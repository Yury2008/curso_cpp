#include <iostream>

int main()
{
  int tamanho;

  std::cout << "Quantos números deseja armazenar? ";
  std::cin >> tamanho;

  int *arrayDinamico  = new int[tamanho];

  for(int i = 0; i < tamanho; i++)
  {
    std::cout << "Digite o " << i + 1 << "º número: ";
    std::cin >> arrayDinamico[i];
  }
  std::cout << std::endl;
  
  std::cout << "Você digitou: ";
  for(int i = 0; i < tamanho; i++)
  {
    std::cout << arrayDinamico[i];
    std::cout << " ";
  }

  delete[] arrayDinamico;
  arrayDinamico = nullptr;
  
  return 0;
}