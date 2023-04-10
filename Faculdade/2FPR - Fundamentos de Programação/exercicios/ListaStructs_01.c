/*
Uma loja de automóveis mantém os carros à venda sob a forma de um vetor de structs contendo as seguintes informações, para cada veículo: placa, modelo, marca, cor, quilometragem, ano modelo/fabricação (deve ser um struct), valor e tipo (usado ou 0 km, conforme o valor do campo quilometragem). Pede-se a declaração de uma variável que represente o estoque de veículos da loja, incluindo todas as declarações de tipos que possam ser necessárias. Além disso, implementar as seguintes funções:
i. Exibir todos os carros do modelo m, ano de fabricação entre a1 e a2 (inclusive), com valor não superior a x reais;
ii. Reajustar os valores de todos os carros 0 km, considerando um aumento de 2.5%;
iii. Retirar do estoque um determinado veículo, dada a sua placa.
*/

#include <stdio.h>
#include <string.h>

