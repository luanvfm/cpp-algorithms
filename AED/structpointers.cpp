#include <iostream>
#include <cstring>

struct Carro {
    char modelo[31]{};
    int ano{};
    float preco{};
};

int main(){
    Carro* corsa = (Carro*)malloc(sizeof(Carro));
    std::strcpy(corsa->modelo, "Vectra");
    corsa->ano = 1997;
    corsa->preco = 12000;

    std::cout << "Modelo: " << corsa->modelo << "\n Ano: " << corsa->ano << "\n Preco: " << corsa->preco;
    free(corsa);
}