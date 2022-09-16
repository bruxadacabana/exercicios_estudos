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
    usuariosespaco,
    turmasespaco
);
CREATE TABLE turma(
    idturma,
    nometurma,
    datainicio,
    datafim,
    idcurso
);
CREATE TABLE curso{
    idcurso,
    materia,
    ementa
};
CREATE TABLE alunocurso(
    idusuario,
    idturma
)