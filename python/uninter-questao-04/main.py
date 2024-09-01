def cadastrar_funcionarios(id):
    nome = input("Digite o nome do funcionário: ")
    setor = input("Digite o setor deste funcionário: ")
    salario = float(input("Digite o salário deste funcionário: R$ "))
    funcionario = {
        "id_funcionario": id,
        "nome_funcionario": nome,
        "setor_funcionario": setor,
        "salario_funcionario": salario
    }
    cad_funcionario = funcionario.copy()
    lista_funcionarios.append(cad_funcionario)

def consultar_funcionarios():
    controle = 1
    while controle != 4:
        print("---------Menu de consulta---------")
        print("| 1 - Consultar todos            |")
        print("| 2 - Consultar por ID           |")
        print("| 3 - Consultar por setor        |")
        print("| 4 - Retornar ao menu principal |")
        print("|---------------------------------")
        try controle = int(input(""))


print("Bem-vindos à empresa da Jenifer Angelo Medeiros")
lista_funcionarios = []
id_global = 3397702