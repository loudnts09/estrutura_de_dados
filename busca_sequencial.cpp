#include <iostream>

void busca_ordenada(int valor, int vetor[], int tamanho){
    for(int i = 0; i <= tamanho; i++){
        if(valor == vetor[i]){
            std::cout<< "O valor está na posição " << i + 1 << std::endl;
        }
    }
}

int main(){
    int valor;
    int tamanho = 10;
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Escolha um número entre 0 e 11 que deseja buscar: ";
    std::cin >> valor;

    busca_ordenada(valor, vetor, tamanho);

    return 0;
}