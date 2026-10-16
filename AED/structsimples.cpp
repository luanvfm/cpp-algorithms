#include <cstdio>
#include <iostream>
#include <string>

struct Pessoa {
  std::string nome{};
  int idade{};
  float altura{};
};

int main() {

  Pessoa *luan = new Pessoa{"luan", 21, 180};

  printf("teste gamer \n \n");

  std::cout << "Nome: " << luan->nome << "\n Idade: " << luan->idade
            << "\n Altura: " << luan->altura;

  return 0;
}