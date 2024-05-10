#include <iostream>

void busca_sequencial(int valor, int vetor[], int tamanho){
    bool encontrado = false;
    if(valor == vetor[0]){
        std::cout<< "O valor " << valor << " está na posição 0."<< std::endl;
        encontrado = true;
    }
    for(int i = 1; i <= tamanho; i++){
        if(valor == vetor[i]){
            std::cout<< "O valor está na posição " << i << ". Onde o valor " << vetor[0] << " se encontra na posição 0."<< std::endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        std::cout << "O valor " << valor << " não está no vetor." << std:: endl;
    }
}

int main(){
    int valor, vetor[] = {30, 28, 83, 14, 56, 356, 97, 108, 9999, 200}, tamanho = sizeof(vetor) / sizeof(vetor[0]);

    std::cout << "Escolha o número que deseja buscar no vetor [";
    for(int i = 0; i < tamanho; i++){
        std::cout << vetor[i];
        if(i < tamanho - 1){
            std::cout << ", ";
        }
    }
    std:: cout << "]: ";
    std::cin >> valor;

    busca_sequencial(valor, vetor, tamanho);

    return 0;
}