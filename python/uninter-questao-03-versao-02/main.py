# função para selecionar o modelo da camiseta e retornar o valor unitário desta
def escolha_modelo():
    print("------------------------------------------------")
    print("|          camisetas          | preço unitário |")
    print("| manga curta simples (MCS)   |     R$ 1,80    |")
    print("| manga longa simples (MLS)   |     R$ 2,10    |")
    print("| manga curta estampada (MCE) |     R$ 2,90    |")
    print("| manga longa estampada (MLE) |     R$ 3,20    |")
    print("------------------------------------------------")
    modelo = "n"
    while modelo == "n":  # loop até que um modelo válido seja selecionado
        modelo = input("Digite o modelo desejado(MCS/MLS/MCE/MLE): ")
        if modelo == "MCS":
            print("Você selecionou o modelo: 'Camiseta de manga curta simples'")
            return 1.80
        elif modelo == "MLS":
            print("Você selecionou o modelo: 'Camiseta de manga longa simples'")
            return 2.10
        elif modelo == "MCE":
            print("Você selecionou o modelo: 'Camiseta de manga curta estampada'")
            return 2.90
        elif modelo == "MLE":
            print("Você selecionou o modelo: 'Camiseta de manga longa estampada'")
            return 3.20
        else:
            modelo = "n"  # reseta a variável para forçar uma nova entrada
            print("Código de modelo inválido, tente novamente.")
            print("")


# função para determinar a quantidade de camisetas e aplicar desconto
def num_camisetas():
    print("------------------------------------------")
    print("|         políticas de desconto          |")
    print("| até 19 camisas       |  0% de desconto |")
    print("| até 199 camisas      |  5% de desconto |")
    print("| até 1999 camisas     |  7% de desconto |")
    print("| até 20.000 camisas   | 12% de desconto |")
    print("------------------------------------------")
    quant = 0
    desconto = 0
    while quant <= 0:  # loop até que uma quantidade válida seja inserida
        quant = int(input("Digite a quantidade de camisetas desejada (quantidade máxima: 20.000): "))
        if quant <= 0: # se a quantidade digitada for 0 ou negativa, pergunta novamente a quantidade
            continue
        elif quant < 20:  # sem desconto para pedidos de até 19 camisetas
            return quant
        elif quant < 200:  # desconto de 5% para pedidos de até 199 camisetas
            desconto = int((quant * 5) / 100)
            return quant - desconto
        elif quant < 2000:  # desconto de 7% para pedidos de até 1999 camisetas
            desconto = int((quant * 7) / 100)
            return quant - desconto
        elif quant <= 20000:  # desconto de 12% para pedidos de até 20000 camisetas
            desconto = int((quant * 12) / 100)
            return quant - desconto
        else:
            quant = 0  # reseta a quantidade para forçar nova entrada de dados
            print("Quantidade inválida, tente novamente.")
            print("")


# função para selecionar a opção de frete e retornar o valor correspondente
def frete():
    print("----------------------------------------------")
    print("|              serviços de frete             |")
    print("| transportadora (1)            |  R$ 100,00 |")
    print("| sedex (2)                     |  R$ 200,00 |")
    print("| retirar pedido na fábrica (0) |  gratuito  |")
    print("----------------------------------------------")
    codigo = -1
    while codigo < 0:  # loop até que um código válido seja inserido
        codigo = int(input("Digite o código da opção de frete desejada (0/1/2): "))
        if codigo < 0:
            break
        elif codigo == 0:
            return 0.00  # retirar da fábrica é sem custos
        elif codigo == 1:
            return 100.00  # entrega com transportadora custa R$ 100
        elif codigo == 2:
            return 200.00  # entrega com sedex custa R$ 200
        else:
            codigo = -1  # reseta o código para forçar uma nova entrada
            print("Código inválido, tente novamente.")



# programa principal / main
print("Bem-vindos à Fábrica de Camisetas da Jenifer Angelo Medeiros!")

# chamando a função escolha_modelo para obter o preço unitário do modelo selecionado
modelo = escolha_modelo()

# chamando a função num_camisas para obter a quantidade de camisetas (com desconto)
quantidade = num_camisetas()

# chamando a função de frete para opter o valor do frete selecionado
entrega = frete()

# calculando o valor total
total = (modelo * quantidade) + entrega

# exibindo o resumo do pedido e o valor total
print("")
print("---------------------------------------")
print("Modelo de R$ %.2f (unidade)" % modelo)
print(f"Quantidade (com desconto): {quantidade}")
print("Valor do frete: R$ %.2f" % entrega)
print("---------------------------------------")
print("Valor total: R$ %.2f" % total)