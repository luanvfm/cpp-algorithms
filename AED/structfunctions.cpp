#include <iostream>

struct Produto {
    char nomeProduto[31]{};
    int codigo{};
    float preco{};
};

void exibirProduto(Produto* produto){
    std::cout << "nome do produto eh: " << produto->nomeProduto;
    std::cout << "\n codigo do produto eh: " << produto->codigo;
    std::cout << "\n preco do produto eh: " << produto->preco << "\n";
}

int main() {
    Produto produto1 = {"Tapioca", 1, 12.50};
    exibirProduto(&produto1);
}