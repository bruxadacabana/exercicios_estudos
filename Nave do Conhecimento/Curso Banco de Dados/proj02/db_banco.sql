CREATE TABLE `pessoas` (
  `id_pessoa` int(15) DEFAULT NULL AUTO_INCREMENT,
  `primeiro_nome` varchar(25) DEFAULT NULL,
  `sobrenome` varchar(100) DEFAULT NULL,
  `data_nascimento` date DEFAULT NULL,
  `endereço` varchar(255) DEFAULT NULL,
  `Identidade` int(9) DEFAULT NULL,
  `cpf` int(11) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `telefone` varchar(14) DEFAULT NULL,
  PRIMARY KEY (id_pessoa)
);

CREATE TABLE `conta` (
  `id_conta` int(15) DEFAULT NULL AUTO_INCREMENT,
  `saldo` int(15) DEFAULT NULL,
  `extrato` varchar(255) DEFAULT NULL,
  `tipo_conta` varchar(15) DEFAULT NULL,
  `senha` varchar(20) DEFAULT NULL,
  `serviços` varchar(255) DEFAULT NULL,
  PRIMARY KEY (id_conta)
);

CREATE TABLE `cliente` (
  `id_cliente` int(15) DEFAULT NULL AUTO_INCREMENT,
  'id_pessoa' int(15) DEFAULT NULL,
  `conta` int(15) DEFAULT NULL,
  `agencia` int(6) DEFAULT NULL,
  FOREIGN KEY (id_pessoa) REFERENCES pessoas(id_pessoa),
  PRIMARY KEY (id_cliente)
);


CREATE TABLE `cliente_conta` (
  `id_cliente` int(15) DEFAULT NULL,
  `id_conta` int(15) DEFAULT NULL,
  FOREIGN KEY (id_cliente) REFERENCES cliente(id_cliente),
  FOREIGN KEY (id_conta) REFERENCES conta(id_conta)
); 

CREATE TABLE `funcionarios` (
  `id_funcionario` int(15) DEFAULT NULL,
  'id_pessoa' int(15) DEFAULT NULL,
  `cargo` varchar(75) DEFAULT NULL,
  PRIMARY KEY (id_funcionario),
  FOREIGN KEY (id_pessoa) REFERENCES pessoas(id_pessoa)
);

CREATE TABLE `gerente` (
  `id_gerente` int(15) DEFAULT NULL,
  'id_pessoa' int(15) DEFAULT NULL,
  `clientes` varchar(255) DEFAULT NULL,
  `conta` int(15) DEFAULT NULL,
  `cargo` varchar(75) DEFAULT NULL,
  PRIMARY KEY (id_gerente),
  FOREIGN KEY (id_pessoa) REFERENCES pessoas(id_pessoa)
);