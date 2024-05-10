#include <iostream>

void insert_sort(int array[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        int valor_corrente = array[i];
        int j = i - 1;
        while((j >= 0) && (array[j] > valor_corrente)){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = valor_corrente;
    }
}

void busca(int array[], int tamanho, int valor){
    bool encontrado = false;

    for(int i = 0; i < tamanho; i++){
        if(valor == array[i]){
            if(valor == array[0]){
                std::cout << "O valor " << valor << " está na posição 0." << std::endl;
            }
            else{
                std::cout << "O valor está na posição " << i << ". Onde o valor " << array[0] << " se encontra na posição 0." << std::endl;
            }
        encontrado = true;
        }
    }
    if(encontrado == false){
        std::cout << "O valor " << valor << " não está no vetor." << std::endl;
    }
}

int main(){
    int valor, array[] = {30, 28, 83, 14, 56, 356, 97, 108, 9999, 200}, tamanho = sizeof(array)/sizeof(array[0]);

    insert_sort(array, tamanho);

    std::cout << "Escolha o número que deseja buscar no vetor [";
    for(int i = 0; i < tamanho; i++){
        std::cout << array[i];
        if(i < tamanho - 1){
            std::cout << ", ";
        }
    }
    std::cout << "]: ";
    std::cin >> valor;

    busca(array, tamanho, valor);

    return 0;
}