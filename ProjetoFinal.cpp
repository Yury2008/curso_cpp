#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

class Livro
{
protected:
std::string autor;
std::string nomeLivro;
float preco;
std::string genero;
int qtdPaginas;

public:
Livro(std::string autor, std::string nomeLivro, float preco, std::string genero, int qtdPaginas)
{
  this->autor = autor;
  this->nomeLivro = nomeLivro;
  this->preco = preco;
  this->genero = genero;
  this->qtdPaginas = qtdPaginas;
}
Livro()
{
  autor = " ";
  nomeLivro = " ";
  preco = 0;
  genero = " ";
  qtdPaginas = 0;
}

void setAutor(std::string autor) {this->autor = autor;}
void setLivro(std::string nomeLivro) {this->nomeLivro = nomeLivro;}
void setPaginas(int qtdPaginas) {this->qtdPaginas = qtdPaginas;}
void setGenero(std::string genero) {this->genero = genero;}
void setPreco(float preco) {this->preco = preco;}

std::string getAutor() {return autor;}
std::string getLivro() {return nomeLivro;}
int getPaginas() {return qtdPaginas;}
std::string getGenero() {return genero;}
float getPreco() {return preco;}
};

class livroLido
{
protected:
int dia;
int mes;
int ano;
float avaliacao;
int qtdLeituras;

public:
livroLido(int dia, int mes, int ano, float avaliacao, int qtdLeituras)
{
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
  this->avaliacao = avaliacao;
  this->qtdLeituras = qtdLeituras;
}

livroLido()
{
  dia = 0;
  mes = 0;
  ano = 0;
  avaliacao = 0;
  qtdLeituras = 0;
}

void setDia(int dia) {this->dia = dia;}
void setMes(int mes) {this->mes = mes;}
void setAno(int ano) {this->ano = ano;}
void setAvaliacao(float avaliacao) {this->avaliacao = avaliacao;}
void setQtdLeituras(int qtdLeituras) {this->qtdLeituras = qtdLeituras;}

int getDia() {return dia;}
int getMes() {return mes;}
int getAno() {return ano;}
float getAvaliacao() {return avaliacao;}
int getQtdLeituras() {return qtdLeituras;}
};

class Biblioteca : public Livro , public livroLido 
{
public:
void mostrarLivro()
{
  std::cout << "Livro: " << nomeLivro << std::endl;
  std::cout << "Autor: " << autor << std::endl;
  std::cout << qtdPaginas << " páginas" << std::endl;
  std::cout << "Gênero: " << genero << std::endl;
  std::cout << "Preço: R$" << preco << std::endl;
}
void mostrarLido()
{
  std::cout << "Livro: " << nomeLivro << std::endl;
  std::cout << "Autor: " << autor << std::endl;
  std::cout << "Leitura finalizada no dia: " << dia << "/" << mes << "/" << ano << std::endl;
  std::cout << "Avaliação: (" << avaliacao << "/5)" << std::endl;
  std::cout << "Quantidade de leituras: " << qtdLeituras << std::endl;
}
};

void adicionarLivros(std::vector<Biblioteca>& livros);
void listarPor(std::vector<Biblioteca>& livros);
void atualizarLeitura(std::vector<Biblioteca>& livros);
void estatisticasBiblioteca(std::vector<Biblioteca>& livros);

int main()
{
  std::vector<Biblioteca> livros;
  int opcao;

  while (true)
  {  
    std::cout << "--------------- BIBLIOTECA ---------------" << std::endl;
    std::cout << "1 - Adicionar livro" << std::endl;
    std::cout << "2 - Listar por..." << std::endl;
    std::cout << "3 - Atualizar leitura" << std::endl;
    std::cout << "4 - Estatísticas" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Escolha uma opcao: ";
    std::cin >> opcao;
    std::cout << std::endl;
    std::cin.ignore();
  
    switch(opcao)
    {
      case 1: adicionarLivros(livros); break;
      case 2: listarPor(livros); break;
      case 3: atualizarLeitura(livros); break;
      case 4: estatisticasBiblioteca(livros); break;
    }
  }
  return 0;
}

std::string paraMaiusculo(std::string texto) 
{
  for(auto &textoMaiusculo : texto) 
  {
    textoMaiusculo = std::toupper(textoMaiusculo);
  }
  return texto;
}

void listarTudo(std::vector<Biblioteca>& livros)
{
  for(auto &livro : livros)
  {
    livro.mostrarLivro();
    std::cout << "-------------------------" << std::endl << std::endl;
  }
}

void listarPorAutor(std::vector<Biblioteca>& livros)
{
  std::string findAutor;
  int encontrou = 0;

  std::cout << "Insira o nome do autor: ";
  std::getline(std::cin, findAutor);
  findAutor = paraMaiusculo(findAutor);
  std::cout << std::endl;

  for (auto &livro : livros)
  {
    std::string temp_Autor = paraMaiusculo(livro.getAutor());

    if (temp_Autor == findAutor)
    {
      livro.mostrarLivro();
      std::cout << "-------------------------" << std::endl << std::endl;
      encontrou++;
    }
  }

  if(encontrou == 0) std::cout << "Não encontrado" << std::endl << std::endl;
}

void listarPorGenero(std::vector<Biblioteca>& livros)
{
  std::string findGenero;
  int encontrou = 0;

  std::cout << "Insira o gênero: ";
  std::getline(std::cin, findGenero);
  findGenero = paraMaiusculo(findGenero);
  std::cout << std::endl;

  for (auto &livro : livros)
  {
    std::string temp_Genero = paraMaiusculo(livro.getGenero());

    if (temp_Genero == findGenero)
    {
      livro.mostrarLivro();
      std::cout << "-------------------------" << std::endl << std::endl;
      encontrou++;
    }
  }

  if (encontrou == 0) std::cout << "Não encontrado" << std::endl << std::endl;
}

void listarLivrosLido(std::vector<Biblioteca>& livros)
{
  int encontrou = 0;
  
  for(auto &livro : livros)
  {
    int temp_qtdLeituras = livro.getQtdLeituras();
    if(temp_qtdLeituras > 0)
    {
      livro.mostrarLido();
      std::cout << "-------------------------------------" << std::endl << std::endl;
      encontrou++;
    }
  }

  if(encontrou == 0) std::cout << "Não encontrado" << std::endl << std::endl;
}

void MaisCaroMaisBarato(std::vector<Biblioteca>& livros)
{
  if(livros.empty())
  {
    std::cout << "Não tem livros cadastrados";
    return;
  }
  
  float max = 0, min = 0;
  
  for(auto &livro : livros)
  {
    float temp_Caro = livro.getPreco();
    if(temp_Caro > max) max = temp_Caro;
  }
  for(auto &livro : livros)
  {
    float temp_preco = livro.getPreco();
    if(temp_preco == max)
    {
      std::cout << "Livro mais caro:" << std::endl;
      std::cout << "Livro: " << livro.getLivro() << std::endl;
      std::cout << "Autor: " << livro.getAutor() << std::endl;
      std::cout << "Preço: R$" << max << std::endl << std::endl;
    }
  }

  min = max;

  for(auto &livro : livros)
  {
    float temp_Barato = livro.getPreco();
    if(temp_Barato < min) min = temp_Barato;
  }
  for(auto &livro : livros)
  {
    float temp_preco = livro.getPreco();
    if(temp_preco == min)
    {
      std::cout << "Livro mais barato:" << std::endl;
      std::cout << "Livro: " << livro.getLivro() << std::endl;
      std::cout << "Autor: " << livro.getAutor() << std::endl;
      std::cout << "Preço: R$" << min << std::endl << std::endl;
    }
  }
}

void totalLeitura(std::vector<Biblioteca>& livros)
{
  int total = 0;
  float porcentagem;

  for(auto &livro : livros)
  {
    int temp_livros = livro.getQtdLeituras();
    total += temp_livros;
  }

  porcentagem = (total * 100) / livros.size();

  std::cout << "Total de livros lidos: " << total << std::endl;
  std::cout << porcentagem << "% dos livros foram lidos" << std::endl;
}

void totalGasto(std::vector<Biblioteca>& livros)
{
  float totalGasto = 0;
  
  for(auto &livro : livros)
  {
    int temp_gasto = livro.getPreco();
    totalGasto += temp_gasto;
  }

  std::cout << "Total gasto: R$" << totalGasto << std::endl << std::endl;
}

void livroMaisLido(std::vector<Biblioteca>& livros)
{
  int maxLeituras = 0, encontrou = 0;
  
  for(auto &livro : livros)
  {
    int temp_qtd = livro.getQtdLeituras();
    if(temp_qtd > maxLeituras) maxLeituras = temp_qtd;
    if(maxLeituras > 0) encontrou++;;
  }

  if(encontrou == 0) std::cout << "Não tem livros lidos" << std::endl << std::endl; return;

  for(auto &livro : livros)
  {
    int temp_qtd = livro.getQtdLeituras(), contador = 0;
    if(temp_qtd == maxLeituras)
    {
      std::cout << "Livro: " << livro.getLivro() << std::endl;
      std::cout << "Autor: " << livro.getAutor() << std::endl;
      std::cout << "Quantidade de leitura: " << maxLeituras << std::endl << std::endl;
      contador++;
    }
    if(contador > 2) break;
  }
}

void adicionarLivros(std::vector<Biblioteca>& livros)
{
  std::string temp_autor, temp_livro, temp_genero;
  int temp_qtdPags;
  float temp_preco;

  std::cout << "--------------- NOVO LIVRO ---------------" << std::endl;
  std::cout << "Insira o nome do livro: ";
  getline(std::cin, temp_livro);
  std::cout << "Insira o nome do autor: ";
  getline(std::cin, temp_autor);
  std::cout << "Insira a quantidade de páginas: ";
  std::cin >> temp_qtdPags;
  std::cin.ignore();
  std::cout << "Insira o gênero: ";
  getline(std::cin, temp_genero);
  std::cout << "Insira o preço: R$";
  std::cin >> temp_preco;
  std::cout << "------------------------------------------" << std::endl;

  temp_livro  = paraMaiusculo(temp_livro);
  temp_autor  = paraMaiusculo(temp_autor);
  temp_genero = paraMaiusculo(temp_genero);
  
  Biblioteca novoLivro;
  novoLivro.setLivro(temp_livro);
  novoLivro.setAutor(temp_autor);
  novoLivro.setPaginas(temp_qtdPags);
  novoLivro.setGenero(temp_genero);
  novoLivro.setPreco(temp_preco);

  livros.push_back(novoLivro);
  std::cout << "Livro cadastrado com sucesso!" << std::endl << std::endl;
}

void listarPor(std::vector<Biblioteca>& livros)
{
  if(livros.empty())
  {
    std::cout << "Não tem livros cadastrados";
    return;
  }

  int escolha;
  
  std::cout << "----- LISTAR POR... -----" << std::endl;
  std::cout << "1 - Todos" << std::endl;
  std::cout << "2 - Gênero" << std::endl;
  std::cout << "3 - Autor" << std::endl;
  std::cout << "4 - Lidos" << std::endl;
  std::cout << "5 - Favoritos" << std::endl;
  std::cout << "-------------------------" << std::endl;
  std::cout << "Escolha uma opção: ";
  std::cin >> escolha;
  std::cin.ignore();
  std::cout << std::endl;

  switch(escolha)
  {
    case 1: listarTudo(livros); break;
    case 2: listarPorGenero(livros); break;
    case 3: listarPorAutor(livros); break;
    case 4: listarLivrosLido(livros); break;
    default: std::cout << "Opção inválida"; break;
  }
}

void atualizarLeitura(std::vector<Biblioteca>& livros)
{
  std::string findLivro;
  int encontrou = 0;
  std::cout << "Insira o nome: ";
  getline(std::cin, findLivro);
  std::cout << std::endl;
  findLivro = paraMaiusculo(findLivro);

  for(auto &livro : livros)
  {
    std::string temp_livro = paraMaiusculo(livro.getLivro());

    if(temp_livro == findLivro)
    {
      int temp_dia, temp_mes, temp_ano;
      float temp_avaliacao;

      std::cout << "--------------- ATUALIZAÇÃO ---------------" << std::endl;
      std::cout << "Insira o dia: ";
      std::cin >> temp_dia;
      std::cout << "Insira o mês: ";
      std::cin >> temp_mes;
      std::cout << "Insira o ano: ";
      std::cin >> temp_ano;
      std::cout << "Insira a avaliação: ";
      std::cin >> temp_avaliacao;
      std::cout << "-------------------------------------------" << std::endl;

      livro.setDia(temp_dia);
      livro.setMes(temp_mes);
      livro.setAno(temp_ano);
      livro.setAvaliacao(temp_avaliacao);
      livro.setQtdLeituras(livro.getQtdLeituras() + 1);

      livros.push_back(livro);
      std::cout << "Leitura atualizada com sucesso!" << std::endl << std::endl;
      encontrou++;
    }
  }

  if(encontrou == 0) std::cout << "Livro não encontrado!" << std::endl << std::endl;
}

void estatisticasBiblioteca(std::vector<Biblioteca>& livros)
{
  std::cout << "--------------- ESTATÍSTICA ---------------" << std::endl;
  std::cout << "Quantidade de livros: " << livros.size() << std::endl;
  totalLeitura(livros);
  totalGasto(livros);
  MaisCaroMaisBarato(livros);
}