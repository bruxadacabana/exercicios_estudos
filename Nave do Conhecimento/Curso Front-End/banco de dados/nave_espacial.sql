CREATE DATABASE nave_espacial;
CREATE TABLE usuarios (
	nome varchar(100),
    cpf varchar(11),
    idUsuario int(15)
);
CREATE TABLE espacos (
    idEspaco int(16),
    nomeEspaco varchar(100),
    usuariosEspaco varchar(255),
    turmasEspaco int(16)
);
CREATE TABLE turma (
	nome varchar(100),
    cpf varchar(11),
    idUsuario int(15)
);