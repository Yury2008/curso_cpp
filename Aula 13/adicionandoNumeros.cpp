#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numeros;

  for(int i = 0; i < 5; i++)
  {
    int numero_temp;
    std::cin >> numero_temp;
    numeros.push_back(numero_temp);
  }
  std::cout << std::endl;
  
  std::cout << "Você digitou: ";
  for(int numero : numeros)
  {
    std::cout << numero << " ";
  }
  
  return 0;
}