#include <iostream>
#include <string>
#include <vector>

struct Aluno {
  std::string nome{};
  int matricula{};
  float nota{};
};

Aluno insiraAluno() {
  Aluno aluno{};

  std::cout << "Insira o nome do aluno: \n";
  std::cin >> aluno.nome;

  std::cout << "Insira a matricula do aluno: \n";
  std::cin >> aluno.matricula;

  std::cout << "Insira a nota do aluno: \n";
  std::cin >> aluno.nota;

  return aluno;
}

int main() {
  int maxAlunos{5};
  std::vector<Aluno> alunos;
  alunos.reserve(maxAlunos);  // Prepara a memoria para 5 vetores.

  for (int i = 1; i <= maxAlunos; i++) {
    if (alunos.size() < maxAlunos) {
      alunos.push_back(insiraAluno());
    };
  };
  
}
