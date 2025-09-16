#include <iostream>

class Funcionario
{
protected:
std::string nome;
double salario;

public:
Funcionario(std::string nome, double salario)
{
  this->nome = nome;
  this->salario = salario;
}

Funcionario()
{
  nome = " ";
  salario = 0;
}

void setNome(std::string nome)
{
  this->nome = nome;
}

std::string getNome()
{
  return nome;
}

void setSalario(double salario)
{
  this->salario = salario;
}

double getSalario()
{
  return salario;
}

void mostarFuncionario()
{
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salário: " << salario << std::endl;
}
};

class Consultor
{
protected:
std::string projeto;

public:
Consultor(std::string projeto)
{
  this->projeto = projeto;
}

Consultor()
{
  projeto = " ";
}

void setProjeto(std::string projeto)
{
  this->projeto = projeto;
}

std::string getNome()
{
  return projeto;
}

void mostrarConsultor()
{
  std::cout << "Projeto: " << projeto << std::endl;
}
};

class FuncionarioConsultor : public Funcionario, public Consultor
{
public:
void mostrarDados()
{
  std::cout << "\nFuncionário Consultor:" << std::endl;
  mostarFuncionario();
  mostrarConsultor();
}
};

int main()
{
  FuncionarioConsultor funcionarioConsultor;

  std::cout << "Nome: ";
  std::string nome_temp;
  getline(std::cin, nome_temp);
  funcionarioConsultor.setNome(nome_temp);

  std::cout << "Salário: ";
  double salario_temp;
  std::cin >> salario_temp;
  funcionarioConsultor.setSalario(salario_temp);
  std::cin.ignore();

  std::cout << "Projeto: ";
  std::string projeto_temp;
  getline(std::cin, projeto_temp);
  funcionarioConsultor.setProjeto(projeto_temp);

  funcionarioConsultor.mostrarDados();
  
  return 0;
}