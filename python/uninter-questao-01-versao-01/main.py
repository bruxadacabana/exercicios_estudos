print("Bem-vindos a loja da Jenifer Angelo Medeiros!")

# solicitando o valor do pedido e a quantidade de parcelas
valorDoPedido = float(input("Digite o valor do pedido: "))
quantidadeDeParcelas = int(input("Digite a quantidade de parcelas: "))

if quantidadeDeParcelas <= 0:
    # testando caso o usuário tenha digitado um valor menor do que zero para a quantidade de parcelas por engano
    print("Quantidade de parcelas inválida, tente novamente")
elif quantidadeDeParcelas < 4:
    # juros de 0% para pedidos parcelados em três vezes ou menos
    valorDaParcela = valorDoPedido / quantidadeDeParcelas
    valorTotalParcelado = valorDaParcela * quantidadeDeParcelas
    print("O valor de cada parcela é R$ %.2f" % valorDaParcela)
    print("O valor total parcelado é de R$ R$ %.2f" % valorTotalParcelado)
elif quantidadeDeParcelas < 6:
    # juros de 4% para pedidos parcelados em cinco vezes ou menos
    juros = (valorDoPedido * 4) / 100
    valorDaParcela = (valorDoPedido + juros) / quantidadeDeParcelas
    valorTotalParcelado = valorDaParcela * quantidadeDeParcelas
    print("O valor de cada parcela é R$ %.2f" % valorDaParcela)
    print("O valor total parcelado é de R$ R$ %.2f" % valorTotalParcelado)
elif quantidadeDeParcelas < 9:
    # juros de 8% para pedidos parcelados em oito vezes ou menos
    juros = (valorDoPedido * 8) / 100
    valorDaParcela = (valorDoPedido + juros) / quantidadeDeParcelas
    valorTotalParcelado = valorDaParcela * quantidadeDeParcelas
    print("O valor de cada parcela é R$ %.2f" % valorDaParcela)
    print("O valor total parcelado é de R$ R$ %.2f" % valorTotalParcelado)
elif quantidadeDeParcelas < 13:
    # juros de 16% para pedidos parcelados em treze vezes ou menos
    juros = (valorDoPedido * 16) / 100
    valorDaParcela = (valorDoPedido + juros) / quantidadeDeParcelas
    valorTotalParcelado = valorDaParcela * quantidadeDeParcelas
    print("O valor de cada parcela é R$ %.2f" % valorDaParcela)
    print("O valor total parcelado é de R$ R$ %.2f" % valorTotalParcelado)
else:
    #juros de 32% para pedidos parcelados em mais de treze vezes
    juros = (valorDoPedido * 32) / 100
    valorDaParcela = (valorDoPedido + juros) / quantidadeDeParcelas
    valorTotalParcelado = valorDaParcela * quantidadeDeParcelas
    print("O valor de cada parcela é R$ %.2f" % valorDaParcela)
    print("O valor total parcelado é de R$ R$ %.2f" % valorTotalParcelado)