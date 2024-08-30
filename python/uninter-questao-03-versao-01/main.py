def escolha_modelo():
    print("------------------------------------------------")
    print("|          camisetas          | preço unitário |")
    print("| manga curta simples (MCS)   |     R$ 1,80    |")
    print("| manga longa simples (MLS)   |     R$ 2,10    |")
    print("| manga curta estampada (MCE) |     R$ 2,90    |")
    print("| manga longa estampada (MLE) |     R$ 3,20    |")
    print("------------------------------------------------")
    modelo = "n"
    while modelo == "n":
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
            modelo = "n"
            print("Código de modelo inválido, tente novamente.")
            print("")


def num_camisetas(valor):
    print("------------------------------------------")
    print("|         políticas de desconto          |")
    print("| até 19 camisas       |  0% de desconto |")
    print("| até 199 camisas      |  5% de desconto |")
    print("| até 1999 camisas     |  7% de desconto |")
    print("| até 20.000 camisas   | 12% de desconto |")
    print("------------------------------------------")
    quant = 0
    while quant <= 0:
        quant = int(input("Digite a quantidade de camisetas desejada (quantidade máxima: 20.000): "))
        if quant <= 0:
            break
        elif quant < 20:
            pedido = quant * valor
            return pedido
        elif quant < 200:
            pedido = quant * valor
            desconto = (pedido * 5) / 100
            return pedido - desconto
        elif quant < 2000:
            pedido = quant * valor
            desconto = (pedido * 7) / 100
            return pedido - desconto
        elif quant <= 20000:
            pedido = quant * valor
            desconto = (pedido * 12) / 100
            return pedido - desconto
        else:
            quant = 0
            print("Quantidade inválida, tente novamente.")
            print("")


def frete():
    print("----------------------------------------------")
    print("|              serviços de frete             |")
    print("| transportadora (1)            |  R$ 100,00 |")
    print("| sedex (2)                     |  R$ 200,00 |")
    print("| retirar pedido na fábrica (0) |  gratuito  |")
    print("----------------------------------------------")
    codigo = -1
    while codigo < 0:
        codigo = int(input("Digite o código da opção de frete desejada (0/1/2): "))
        if codigo < 0:
            break
        elif codigo == 0:
            return 0.00
        elif codigo == 1:
            return 100.00
        elif codigo == 2:
            return 200.00
        else:
            codigo = -1
            print("Código inválido, tente novamente.")



print("Bem-vindos à Fábrica de Camisetas da Jenifer Angelo Medeiros!")
modelo = escolha_modelo()
valor_bruto = num_camisetas(modelo)
total = valor_bruto + frete()
print("")
print("Valor total: R$ %.2f" % total)

