print("Bem vindos a loja de Marmitas da Jenifer Angelo Medeiros")
print("|-----------------------CARDÁPIO----------------------|")
print("| tamanho | bife acebolado (BA) | filé de frango (FF) |")
print("|    P    |      R$ 16,00       |      R$ 15,00       |")
print("|    M    |      R$ 18,00       |      R$ 17,00       |")
print("|    G    |      R$ 22,00       |      R$ 21,00       |")
print("|-----------------------------------------------------|")

# variáveis de controle
controle = "S"  # controla o loop de pedidos
acumulador = 0.00  #controla o valor total dos pedidos

# loop para realizar os pedidos enquanto o cliente quiser
while controle != "N":
    # solicitando o sabor desejado e validando a entrada
    sabor = input("Digite o sabor desejado (BA/FF): ")
    if sabor != "BA" and sabor != "FF":
        print("Sabor inválido, tente novamente.")
    else:
        # solicitando o tamanho desejado da marmita e validando a entrada
        tamanho = input("Digite o tamanho de marmita desejado (P/M/G): ")
        if tamanho != "P" and tamanho != "M" and tamanho != "G":
            print("Tamanho inválido, tente novamente.")
        else:
            # calculando o valor com base no sabor e tamanho escolhidos
            if sabor == "BA":
                if tamanho == "P":
                    print("Você pediu um Bife Acebolado (tamanho pequeno): R$ 16,00")
                    acumulador = acumulador + 16.00
                elif tamanho == "M":
                    print("Você pediu um Bife Acebolado (tamanho médio): R$ 18,00")
                    acumulador = acumulador + 18.00
                else:
                    print("Você pediu um Bife Acebolado (tamanho grande) - R$ 22,00")
                    acumulador = acumulador + 22.00
            else:
                if tamanho == "P":
                    print("Você pediu um Filé de Frango (tamanho pequeno): R$ 15,00")
                    acumulador = acumulador + 15.00
                elif tamanho == "M":
                    print("Você pediu um Filé de Frango (tamanho médio): R$ 17,00")
                    acumulador = acumulador + 17.00
                else:
                    print("Você pediu um Filé de Frango (tamanho grande) - R$ 21,00")
                    acumulador = acumulador + 21.00
    print("") # espaço em branco para separar
    controle = input("Deseja mais alguma coisa? (S/N): ")
    print("") # espaço em branco para separar

# exibindo o valor total a ser pago
print("O valor total a ser pago é R$ %.2f" % acumulador)