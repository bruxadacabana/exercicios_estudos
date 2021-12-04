# ** faz potenciação
# // resultado divisão inteira
# %  resto divisão inteira
# ordem de precedência:  () | ** | * / // % |  + -

print('-------------------')
n1 = float(input('Digite um número: '))
n2 = float(input('Digite outro número: '))
print(' ')
print('-------------------')
print(' ')

# DESAFIO 005:
# faça um programa que leia um número inteiro e mostre na tela seu sucessor e seu antecessor
print('O sucessor do {} é {} e o antecessor é {}'.format(n1, n1 + 1, n1 - 1))
print(' ')

# DESAFIO 006
# faça um programa que leia um número e mostre seu dobro, triplo e raiz quadrada.
print('O dobro de {} é {}, o triplo é {} e a raiz quadrada é {}!'.format(n1, n1 * 2, n1 * 3, n1 ** 2))
print(' ')

# EXERCÍCIOS DURANTE AULA
print('A soma vale {}'.format(n1 + n2))
print('A divisão é {:.2f}'.format(n1 / n2))
print('A subtração é {}'.format(n1 - n2))
print('A multiplicação é {}'.format(n1 * n2))
print('A divisão inteira é {}'.format(n1 // n2))
print('O resto da divisão inteira é {}'.format(n1 % n2))
print('A potência é {}'.format(n1 ** n2))

# DESAFIO 007
# faça um programa que leia duas notas de um aluno, calcule e mostre a média
print('A média entre eles é {:.2f}'.format((n1 + n2) / 2))
print(' ')

# DESAFIO 008
# faça um programa que leia um valor em metros e o exiba convertido em centímetros e milímetros
print('{} metros é equivalente à {} centímetros e {} milímetros'.format(n1, n1 * 100, n1 * 1000))
print(' ')

# DESAFIO 009
# faça um programa que leia um número inteiro qualquer e mostre na tela a sua tabuada
print('===TABUADA===')
print('0 x {} = {}'.format(n2, n2 * 0))
print('1 x {} = {}'.format(n2, n2 * 1))
print('2 x {} = {}'.format(n2, n2 * 2))
print('3 x {} = {}'.format(n2, n2 * 3))
print('4 x {} = {}'.format(n2, n2 * 4))
print('5 x {} = {}'.format(n2, n2 * 5))
print(' ')

# DESAFIO 10
# faça um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos dólares ela pode comprar
# considere US$1,00 = R$3,27
print('Você pode comprar {} dólares'.format(n1//3.27))
print(' ')

# DESAFIO 011
# faça um programa que leia a largura e a altura de uma parede em metros, calcule a sua área e a quantidade de tinta
# necessária para pintá-la, sabendo que casa litro de tinta pinta uma área de 2m²
print('A quantidade de tinta é {}l'.format(((n1 * n2)/2)))

# DESAFIO 012
# faça um programa que leia o preço de um produto e mostre seu novo preço com 5% de desconto
print(' ')
valor = float(input('Digite um valor em R$'))
print('O preço com desconto é R${}'.format(valor-((valor * 5)/100)))

# DESAFIO 013
# faça um programa que leia o salário de um funcionário e mostre seu novo salário com 15% de aumento
print(' ')
print('O salário atualizado é R${}'.format(valor + ((valor * 15)/100)))