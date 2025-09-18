#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numeros;

  for(int i = 0; i < 6; i++)
  {
    int numero_temp;
    std::cout << "Insira o " << i + 1 << "º número: ";
    std::cin >> numero_temp;
    numeros.push_back(numero_temp);
  }
  std::cout << std::endl;
  
  std::cout << "Você digitou: ";
  for(int numero : numeros)
  {
    std::cout << numero << " ";
  }
  std::cout << std::endl;
  
  numeros.erase(numeros.begin());
  numeros.pop_back();

  std::cout << "Vetor após a remoções:";
  for(int numero : numeros)
  {
    std::cout << numero << " ";
  }
  
  return 0;
}