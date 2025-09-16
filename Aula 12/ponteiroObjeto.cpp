#include <iostream>

class Aluno
{
private:
std::string nome;
int idade;

public:
Aluno(std::string nome, int idade)
{
  this->nome = nome;
  this->idade = idade;
}

Aluno()
{
  nome = " ";
  idade = 0;
}

void setNome(std::string nome)
{
  this->nome = nome;
}
std::string getNome()
{
  return nome;
}

void setIdade(int idade)
{
  this->idade = idade;
}
int getIdade()
{
  return idade;
}

void mostrarDados()
{
  std::cout << std::endl;
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Idade: " << idade << std::endl;
}
};

int main()
{
  Aluno aluno1;
  Aluno *pAluno = &aluno1;

  std::cout << "Digite o nome do aluno: ";
  std::string temp_nome;
  getline(std::cin, temp_nome);
  pAluno->setNome(temp_nome);

  std::cout << "Digite a idade do aluno: ";
  int idade_temp;
  std::cin >> idade_temp;
  pAluno->setIdade(idade_temp);

  pAluno->mostrarDados();
  
  return 0;
}