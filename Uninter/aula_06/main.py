def itens_mercado():
    # criando listas vazias
    item = []
    mercado = []

    # adicionando itens na lista
    for i in range(3):
        item.append(input("Digite o nome do item: "))
        item.append(int(input("Digite a quantidade deste item: ")))
        item.append(float(input("Digite o preço deste item: ")))
        mercado.append(item[:])
        item.clear()
    return mercado

print(itens_mercado())