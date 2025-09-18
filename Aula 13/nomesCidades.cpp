#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> cidades;

  for(int i = 0; i < 4; i++)
  {
    std::string cidades_temp;
    getline(std::cin, cidades_temp);
    cidades.push_back(cidades_temp);
  }
  std::cout << std::endl;
  
  for(auto it = cidades.begin(); it != cidades.end(); it++)
  {
    std::cout << *it << std::endl;
  }
  
  return 0;
}