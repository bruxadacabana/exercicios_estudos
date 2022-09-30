/*
id_pessoa int(15)
primeiro_nome varchar(25)
sobrenome varchar(100)
data_nascimento date
endereço varchar(255)
Identidade int(9)
cpf int(11)
email varchar(100)
telefone varchar(14)
*/

INSERT INTO `pessoas`(`primeiro_nome`, `sobrenome`, `data_nascimento`, `endereço`, `Identidade`, `cpf`, `email`, `telefone`) VALUES ('JM','Flora','2001-10-31','Algum canto de Nilópolis, Rio de Janeiro',111111111,11111111111,'jmflora@gmail.com','11111111');
INSERT INTO `pessoas`(`primeiro_nome`, `sobrenome`, `data_nascimento`, `endereço`, `Identidade`, `cpf`, `email`, `telefone`) VALUES ('Sandy','Cristina','2001-06-31','Algum canto de São Paulo',222222222,22222222222,'sancristina@gmail.com','22222222');

/
INSERT INTO `cliente`(`id_pessoa`, `agencia`) VALUES (1,'[value-2]','[value-3]','[value-4]')