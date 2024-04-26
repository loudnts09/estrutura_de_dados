#include <iostream>

void burble_sort(int tamanho, int vetor[]){
    int auxiliar;
    for(int j = 0; j < tamanho; j++){
        for(int i = 0; i < tamanho - 1; i++){
            if(vetor[i] > vetor[i+1]){
                auxiliar = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = auxiliar;
            }
        }
    }
}

void busca_binaria(int numero, int vetor[], int inicio, int fim){
    bool encontrou = false;
    int meio;

    while (encontrou == false){
        meio = inicio + (fim - inicio) / 2;

        if(numero == vetor[meio]){
            encontrou = true;
        }
        else if(numero < vetor[meio]){
            fim = meio - 1;
        }
        else if(numero > vetor[meio]){
            inicio = meio + 1;
        }
        else{
            break;
        }
    }
    if(encontrou == false){
        std::cout << "Número não encontrado no vetor." << std::endl;
    }
    else{
        std::cout << "O valor " << numero << " está na posição " << meio << ", onde o vetor se inicia com o número " << vetor[0] << " na posição 0." << std::endl;
    }
}

int main(){
    int vetor[] = {30, 28, 83, 14, 56, 356, 97, 108, 9999, 200}, numero, inicio = 0,fim = sizeof(vetor) / sizeof(vetor[0]);

    burble_sort(fim, vetor);

    std::cout << "Escolha o número que deseja buscar no vetor [";
    for(int i = 0; i < fim; i++){
        std::cout << vetor[i];
        if (i < fim - 1){
            std::cout << ", ";
        }
    }
    std::cout << "]: ";
    std:: cin >> numero;

    busca_binaria(numero, vetor, inicio, fim);

    return 0;
}