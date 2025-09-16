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
  
  int novoTamanho;

  std::cout << "Quantos números deseja armazenar? ";
  std::cin >> novoTamanho;

  int *arrayDinamicoII = new int[novoTamanho];

  for(int i = 0; i < tamanho; i++)
  {
    arrayDinamicoII[i] = arrayDinamico[i];
  }

  for(int i = tamanho; i < novoTamanho; i++)
  {
    std::cout << "Digite o " << i + 1 << "º número: ";
    std::cin >> arrayDinamicoII[i];
  }
  std::cout << std::endl;

  std::cout << "Você digitou: ";
  for(int i = 0; i < novoTamanho; i++)
  {
    std::cout << arrayDinamicoII[i];
    std::cout << " ";
  }

  delete[] arrayDinamico;
  arrayDinamico = nullptr;
  delete[] arrayDinamicoII;
  arrayDinamicoII = nullptr;
  
  return 0;
}