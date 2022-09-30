CREATE TABLE `pessoas` (
  `id_pessoa` int(11) DEFAULT NULL AUTO_INCREMENT,
  `primeiro_nome` varchar(255) DEFAULT NULL,
  `sobrenome` varchar(255) DEFAULT NULL,
  `data_nascimento` date DEFAULT NULL,
  `endereço` varchar(255) DEFAULT NULL,
  `Identidade` int(11) DEFAULT NULL,
  `cpf` int(11) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `telefone` varchar(255) DEFAULT NULL,
  PRIMARY KEY (id_pessoa),
  FOREIGN KEY (id_pessoa) REFERENCES cliente(id_cliente),
  FOREIGN KEY (id_pessoa) REFERENCES funcionarios(id_funcionario),
  FOREIGN KEY (id_pessoa) REFERENCES gerente(id_gerente)
);

CREATE TABLE `conta` (
  `id_conta` int(11) DEFAULT NULL AUTO_INCREMENT,
  `saldo` int(11) DEFAULT NULL,
  `extrato` int(11) DEFAULT NULL,
  `tipo_conta` varchar(15) DEFAULT NULL,
  `senha` varchar(20) DEFAULT NULL,
  `serviços` varchar(255) DEFAULT NULL,
  PRIMARY KEY (id_conta)
);

CREATE TABLE `cliente` (
  `id_cliente` int(11) DEFAULT NULL,
  `conta` int(11) DEFAULT NULL,
  `agencia` int(11) DEFAULT NULL,
  PRIMARY KEY (id_cliente)
);


CREATE TABLE `cliente_conta` (
  `id_cliente` int(11) DEFAULT NULL,
  `id_conta` int(11) DEFAULT NULL,
  PRIMARY KEY (id_cliente),
  PRIMARY KEY (id_conta),
  FOREIGN KEY (id_cliente) REFERENCES cliente(id_cliente),
  FOREIGN KEY (id_conta) REFERENCES conta(id_conta),
); 

CREATE TABLE `funcionarios` (
  `id_funcionario` int(11) DEFAULT NULL,
  `cargo` varchar(255) DEFAULT NULL,
  PRIMARY KEY (id_funcionario)
);

CREATE TABLE `gerente` (
  `id_gerente` int(11) DEFAULT NULL,
  `clientes` varchar(255) DEFAULT NULL,
  `conta` int(11) DEFAULT NULL,
  `cargo` varchar(255) DEFAULT NULL,
  PRIMARY KEY (id_gerente)
);