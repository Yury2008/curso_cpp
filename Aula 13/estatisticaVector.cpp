#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
  std::vector<int> numeros;
  int numeros_temp;

  int contador = 0;
  while (true)
  {
    std::cout << "Insira o " << contador + 1 << "º número: ";
    std::cin >> numeros_temp;

    if(numeros_temp == 0) break;

    else
    {
      numeros.push_back(numeros_temp);
      contador++;
    }
  }
  std::cout << std::endl;

  std::cout << "Quantidade: " << contador << std::endl;
  std::cout << "Maior número: " << *max_element(numeros.begin(), numeros.end()) << std::endl;
  std::cout << "Menor número: " << *min_element(numeros.begin(), numeros.end()) << std::endl;
  std::cout << "Soma total: " << std::accumulate(numeros.begin(), numeros.end(), 0);
  
  
  return 0;
}