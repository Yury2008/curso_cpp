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

void setNome(std::string nome) {this->nome = nome;}
std::string getNome() {return nome;}

void setSalario(float salario) {this->salario = salario;}
float getSalario() {return salario;}

void mostrarDados()
{
  std::cout << "Funcionario: Nome = " << nome << ", Salario = " << salario;
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

void setCurso(std::string curso) {this->curso = curso;}
std::string getCurso() {return curso;}

void mostrarDados()
{
  std::cout << "Estagiário: Nome = " << nome << ", Salario = " << salario << ", Curso = " << curso;
}
};

int main()
{
  Funcionario funcionario("João Silva", 2500.0);
  Estagiario estagiario("Maria", 1200.0, "Engenharia");
  funcionario.mostrarDados();
  std::cout << std::endl;
  estagiario.mostrarDados();
  std::cout << std::endl;
}