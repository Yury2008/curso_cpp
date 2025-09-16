#include <iostream>

class Funcionario
{
protected:
std::string nome;
float salario;

public:
Funcionario(std::string nome, float salario)
{
  this->nome = nome;
  this->salario = salario;
}

Funcionario()
{
  nome = " ";
  salario = 0;
}

void setNome(std::string nome) {this->nome = nome;}
std::string getNome() {return nome;}

void setSalario(float salario) {this->salario = salario;}
float getSalario() {return salario;}

void mostrarDados()
{
  std::cout << "Funcionario: Nome = " << nome << ", Salario = " << salario << std::endl;
}
};

class Estagiario : public Funcionario
{
private:
std::string curso;

public:
Estagiario(std::string nome, float salario, std::string curso) : Funcionario(nome, salario)
{
  this->curso = curso;
}

Estagiario()
{
  curso = " ";
}

void setCurso(std::string curso) {this->curso = curso;}
std::string getCurso() {return curso;}

void mostrarDados()
{
  std::cout << "Estagiário: Nome = " << nome << ", Salario = " << salario << ", Curso: " << curso << std::endl;
}
};

int main()
{
  Funcionario funcionario;
  Estagiario estagiario;

  // Dados do Funcionário
  std::cout << "Dados do Funcionario:" << std::endl;
  std::cout << "Nome = ";
  std::string funcionarioNome_temp;
  getline(std::cin, funcionarioNome_temp);
  funcionario.setNome(funcionarioNome_temp);
  
  std::cout << "Salario = ";
  float funcionarioSalario_temp;
  std::cin >> funcionarioSalario_temp;
  funcionario.setSalario(funcionarioSalario_temp);
  std::cout << std::endl;
  std::cin.ignore();

  // Dados Estagiário
  std::cout << "Estagiario:" << std::endl;
  std::cout << "Nome = ";
  std::string estagiarioNome_temp;
  getline(std::cin, estagiarioNome_temp);
  estagiario.setNome(estagiarioNome_temp);

  std::cout << "Salario = ";
  float estagiarioSalario_temp;
  std::cin >> estagiarioSalario_temp;
  estagiario.setSalario(estagiarioSalario_temp);
  std::cin.ignore();

  std::cout << "Curso = ";
  std::string estagiarioCurso_temp;
  getline(std::cin, estagiarioCurso_temp);
  estagiario.setCurso(estagiarioCurso_temp);
  std::cout << std::endl;

  funcionario.mostrarDados();
  estagiario.mostrarDados();

  return 0;
}