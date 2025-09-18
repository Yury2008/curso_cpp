#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> numeros;

  for(int i = 0; i < 10; i++)
  {
    int numeros_temp;
    std::cout << "Insira o " << i + 1 << " número: ";
    std::cin >> numeros_temp;
    numeros.push_back(numeros_temp);
  }
  std::cout << std::endl;

  std::cout << "Números: ";
  for(int numero : numeros)
  {
    std::cout << numero << " ";
  }
  std::cout << std::endl;
  
  int findNumero;
  std::cout << "Procurar: ";
  std::cin >> findNumero;
  auto it = find(numeros.begin(), numeros.end(), findNumero);
  
  if(it != numeros.end())
  {
    int indice;
    for(int i = 0; i < numeros.size(); i++)
    {
      if(*it == numeros[i]) indice = i;
    }
    std::cout << "Seu número foi encontrado na posição " << indice;
  }

  else std::cout << "Seu número não foi encontrado";
  
  return 0;
}