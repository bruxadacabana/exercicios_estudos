CREATE DATABASE nave_espacial;
CREATE TABLE dependentes(
    nome varchar(100),
    usuarioid varchar(20)
);
CREATE TABLE usuarios(
    nome varchar(100),
    cpf varchar(11),
    idusuario varchar(20)
);
CREATE TABLE espacos(
    idespaco varchar(20),
    nomeespaco varchar(50),
    usuariosespaco int(100),
    turmasespaco int(100)
);
CREATE TABLE turma(
    idturma varchar(20),
    nometurma varchar(100),
    datainicio DATE,
    datafim DATE,
    idcurso varchar(20)
);
CREATE TABLE curso{
    idcurso varchar(20),
    materia varchar(50),
    ementa text(400)
};
CREATE TABLE alunocurso(
    idusuario varchar(20),
    idturma varchar(20)
)