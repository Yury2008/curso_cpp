#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> numeros;

  for(int i = 0; i < 7; i++)
  {
    int numeros_temp;
    std::cout << "Insira o " << i + 1 << " número: ";
    std::cin >> numeros_temp;
    numeros.push_back(numeros_temp);
  }
  std::cout << std::endl;
  
  std::cout << "Ordem crescente: ";
  sort(numeros.begin(), numeros.end());
  for(int numero : numeros)
  {
    std::cout << numero << " ";
  }
  std::cout << std::endl;
  
  std::cout << "Ordem decrescente: ";
  reverse(numeros.begin(), numeros.end());
  for(int numero : numeros)
  {
    std::cout << numero << " ";
  }
  
  return 0;
}