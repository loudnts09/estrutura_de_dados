
def burble_sort(vetor):
    for i in range(len(vetor)):
        for j in range(len(vetor) - 1):
            if(vetor[j] > vetor[j+1]):
                auxiliar = vetor[j]
                vetor[j] = vetor[j+1]
                vetor[j+1] = auxiliar
    
def busca_binaria(numero, vetor):
    encontrado  = False
    inicio = 0
    fim = len(vetor) - 1 
    
    while inicio <= fim and encontrado == False:
        meio = (fim + inicio) // 2
        
        if numero == vetor[meio]:
            encontrado = True
        elif numero < vetor[meio]:
            fim = meio - 1
        else:
            inicio = meio + 1
        
    if encontrado:
        print(f"O número {numero} está na posição {meio} do vetor, onde o vetor se inicia com o número {vetor[0]} na posição 0.")
    else:
        print(f"O número {numero} não está presente no vetor.")


vetor = [5, 1, 39, 28, 104, 90, 80, -39]

burble_sort(vetor)

numero = int(input(f"Digite o número que deseja buscar no vetor {vetor}: "))

busca_binaria(numero, vetor)
