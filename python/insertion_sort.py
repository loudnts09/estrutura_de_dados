def insertion_sort(array):
    for i in range(1, len(array)):
        valor_corrente = array[i]
        j = i - 1
        while j >= 0 and array[j] > valor_corrente:
            array[j+1] = array[j]
            j-= 1
        array[j+1] = valor_corrente
    return array

def busca(array, numero):
    encontrado = False
    for i in range(0, len(array)):
        if numero == array[i]:
            if numero == array[0]:
                print(f"O número {numero} está na posição 0")
            else:
                print(f"O número {numero} está presente na posição {i}. Onde o {array[0]} se encontra na posição 0.")
            encontrado = True
    if encontrado == False:
        print(f"O numero {numero} não está presente no array.")
    

array = [5, 1, 39, 28, 104, 90, 80, -39]

insertion_sort(array)

numero = int(input(f"Digite o número que deseja encontrar no  array {array}: "))

busca(array, numero)