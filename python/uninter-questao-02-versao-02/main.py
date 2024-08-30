print("Bem vindos a loja de Marmitas da Jenifer Angelo Medeiros")
print("|-----------------------CARDÁPIO----------------------|")
print("| tamanho | bife acebolado (BA) | filé de frango (FF) |")
print("|    P    |      R$ 16,00       |      R$ 15,00       |")
print("|    M    |      R$ 18,00       |      R$ 17,00       |")
print("|    G    |      R$ 22,00       |      R$ 21,00       |")
print("|-----------------------------------------------------|")

# variáveis de controle
controle = "S"  # controla o loop de pedidos
acumulador = 0.00  # controla o valor total dos pedidos

# loop para realizar os pedidos enquanto o cliente quiser
while controle != "N":
    sabor = "N"  # reseta o loop de sabor
    tamanho = "N"  # reseta o loop de tamanho
    while sabor != "BA" and sabor != "FF":
        # solicitando o sabor desejado e validando a entrada
        sabor = input("Digite o sabor desejado (BA/FF): ")
        if sabor == "BA":
            while tamanho != "P" and tamanho != "M" and tamanho != "G":
                tamanho = input("Digite o tamanho desejado (P/M/G): ")
                if tamanho == "P":
                    print("Você pediu um Bife Acebolado (tamanho pequeno): R$ 16,00")
                    print("")
                    acumulador = acumulador + 16.00  # adicionando o valor ao acumulador
                elif tamanho == "M":
                    print("Você pediu um Bife Acebolado (tamanho médio): R$ 18,00")
                    print("")
                    acumulador = acumulador + 18.00  # adicionando o valor ao acumulador
                elif tamanho == "G":
                    print("Você pediu um Bife Acebolado (tamanho grande): R$ 22,00")
                    print("")
                    acumulador = acumulador + 22.00  # adicionando o valor ao acumulador
                else:
                    print("Código de tamanho inválido, tente novamente.")
                    print("")
                    print("")
        elif sabor == "FF":
            while tamanho != "P" and tamanho != "M" and tamanho != "G":
                tamanho = input("Digite o tamanho desejado (P/M/G): ")
                if tamanho == "P":
                    print("Você pediu um Filé de Frango (tamanho pequeno): R$ 15,00")
                    print("")
                    acumulador = acumulador + 15.00  # adicionando o valor ao acumulador
                elif tamanho == "M":
                    print("Você pediu um Filé de Frango (tamanho médio): R$ 17,00")
                    print("")
                    acumulador = acumulador + 17.00  # adicionando o valor ao acumulador
                elif tamanho == "G":
                    print("Você pediu um Filé de Frango (tamanho grande): R$ 21,00")
                    print("")
                    acumulador = acumulador + 21.00  # adicionando o valor ao acumulador
                else:
                    print("Código de tamanho inválido, tente novamente.")
                    print("")
                    print("")
        else:
            print("Sabor inválido, tente novamente.")
            print("")
            print("")
    # perguntando ao cliente de deseja continuar pedindo
    controle = input("Deseja mais alguma coisa? (S/N) ")
    if controle == "N":
        break
    elif controle == "S":
        continue
    else:
        print("Comando inválido, tente novamente")

# exibindo o valor total a ser pago
print("")
print("")
print("O valor total a ser pago é R$ %.2f" % acumulador)