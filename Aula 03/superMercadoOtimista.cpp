#include <iostream>
#include <string>

int main()
{
  std::string diaSemana, tipoProduto, nomeProduto;
  float precoProduto;

  std::cout << "Informe o dia da semana: ";
  std::cin >> diaSemana;
  std::cin.ignore();

  while(diaSemana != "segunda" && diaSemana != "terça" && diaSemana != "quarta" && diaSemana != "quinta" && diaSemana != "sexta" && diaSemana != "sábado")
  {
    std::cout << "Erro. Tente novamente." << std::endl;
    std::cout << "Informe o dia da semana: ";
    std::cin >> diaSemana;
    std::cin.ignore();
  }
  
  std::cout << "Informe o preço do produto: ";
  std::cin >> precoProduto;
  std::cin.ignore();
  
  std::cout << "Informe o tipo do produto(ouro/prata): ";
  std::cin >> tipoProduto;
  std::cin.ignore();

  while(tipoProduto != "ouro" && tipoProduto != "prata")
  {
    std::cout << "Erro. Tente novamente." << std::endl;
    std::cout << "Informe o tipo do produto(ouro/prata): ";
    std::cin >> tipoProduto;
    std::cin.ignore();
  }
  
  std::cout << "Informe o nome do produto: ";
  std::cin >> nomeProduto;
  std::cin.ignore();
  
  if((diaSemana == "segunda" || diaSemana == "terça" || diaSemana == "quarta") && tipoProduto == "ouro") std::cout << "O preço do produto " << nomeProduto << " no dia " << diaSemana << " é R$" << precoProduto / 2;

  else if((diaSemana == "quinta" || diaSemana == "sexta") && (precoProduto >= 10 && precoProduto <= 100)) std::cout << "O preço do produto " << nomeProduto << " no dia " << diaSemana << " é R$" << precoProduto / 3;

  else if(diaSemana == "sábado" && tipoProduto == "prata") std::cout << "O preço do produto " << nomeProduto << " no dia " << diaSemana << " é R$" << precoProduto * 3;

  else std::cout << "O preço do produto " << nomeProduto << " no dia " << diaSemana << " é R$" << precoProduto * 2;
  
  return 0;
}
