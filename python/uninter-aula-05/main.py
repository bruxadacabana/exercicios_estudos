def faturial (num):
    '''
    Função que calcula o fatorial de um numero
    :param num: valor do qual é calculado o fatorial
    :return: valor resultado do calculo
    '''
    fat = 1;
    if num < 0:
        print("É necessário um número natural para isso")
    elif (num == 0):
        return fat
    else:
        while (num > 1):
            fat = fat * num
            num = num - 1

    return fat
x = int(input("Digite um valor: "))
print(f"{x}! = {faturial(x)}")
help(faturial)