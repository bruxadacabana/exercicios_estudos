codigo = 0
pedido = 0.00

while (codigo != 5):
    print("Bem vindos à")
    print("LANCHONETE")
    print("1: Coxinha - R$ 5,00")
    print("2: Pastel - R$ 7,00")
    print("3: Café - R$ 4,00")
    print("4: Suco - R$ 6,00")
    print("5: SAIR")
    print(" ")
    print("Digite o código do item que você quer: ")
    codigo = int(input())

    if (codigo == 1):
        print("Digite a quantidade desejada do item: ")
        quantidade = int(input())
        pedido = pedido + (quantidade * 5.00)
    elif (codigo == 2):
        print("Digite a quantidade desejada do item: ")
        quantidade = int(input())
        pedido = pedido + (quantidade * 7.00)
    elif (codigo == 3):
        print("Digite a quantidade desejada do item: ")
        quantidade = int(input())
        pedido = pedido + (quantidade * 4.00)
    elif (codigo == 4):
        print("Digite a quantidade desejada do item: ")
        quantidade = int(input())
        pedido = pedido + (quantidade * 6.00)

print("Seu pedido ficou em R$ %.2f" %pedido)




