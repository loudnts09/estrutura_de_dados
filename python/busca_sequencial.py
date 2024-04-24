def busca_ordenada(numero, vetor):
    for i in range(len(vetor)):
        if numero == vetor[i]:
            print(f"O número {numero} está na posição {i} do vetor: {vetor}\nOnde o vetor se inicia com o número {vetor[0]} estando na posição 0")
            break
    else :
        print("Número não encontrado.")
        
def add_vetor(adicionar, vetor):
    if adicionar == 1:
        novo_num = int(input(f"Digite o número que deseja adicionar no vetor {vetor}: "))
        vetor.append(novo_num)
        encontrar = int(input(f"Digite o número que deseja encontrar na vetor {vetor}: "))
        busca_ordenada(encontrar, vetor)
    else:
        print("Obrigado por testar o código!")
        
    
vetor = [5, 1, 39, 28, 104, 90, 80, -39]
numero = int(input(f"Digite o número que deseja encontrar na vetor {vetor}: "))

busca_ordenada(numero, vetor)

adicionar = int(input('Deseja adicionar mais números ao vetor? [digite 1 para "sim"] '))

add_vetor(adicionar, vetor)