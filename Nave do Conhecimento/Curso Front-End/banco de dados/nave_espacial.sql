CREATE DATABASE nave_espacial;
CREATE TABLE dependentes(
    nome varchar(100),
    usuarioid int
);
CREATE TABLE usuarios(
    nome varchar(100),
    cpf varchar(11),
    idusuario int
);
CREATE TABLE espacos(
    idespaco int,
    nomeespaco varchar(50),
    usuariosespaco int,
    turmasespaco int
);
CREATE TABLE turma(
    idturma int,
    nometurma varchar(100),
    datainicio DATETIME,
    datafim DATETIME,
    idcurso int
);
CREATE TABLE curso(
    idcurso int,
    materia varchar(50),
    ementa text
);
CREATE TABLE alunocurso(
    idusuario int,
    idturma int
);

INSERT INTO usuarios (nome, cpf)
VALUES ('Kaio', 11111111111);
INSERT INTO usuarios (nome, cpf)
VALUES ('Mario', 22222222222);
INSERT INTO usuarios (nome, cpf)
VALUES ('Lua', 33333333333);
INSERT INTO usuarios (nome, cpf)
VALUES ('Kana', 44444444444);
INSERT INTO usuarios (nome, cpf)
VALUES ('Lucy', 55555555555);

INSERT INTO dependentes (nome)
VALUES ('Mary');
INSERT INTO dependentes (nome)
VALUES ('John');
INSERT INTO dependentes (nome)
VALUES ('Pedro');
INSERT INTO dependentes (nome)
VALUES ('Alice');
INSERT INTO dependentes (nome)
VALUES ('Mirelle');

INSERT INTO curso (materia, ementa)
VALUES ('Python', 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi venenatis pulvinar orci, at consequat justo consectetur sed. Proin varius mollis fermentum. Cras risus lacus, commodo a viverra quis, sodales et nisl. Quisque ligula libero, varius id molestie ut, pulvinar sed eros. Maecenas cursus, erat sed rhoncus efficitur, sapien metus facilisis turpis, ac pellentesque nunc nulla gravida ipsum. Etiam dignissim ultricies felis, non efficitur eros mollis sit amet. Aenean gravida, turpis non rutrum sodales, felis diam feugiat orci, et mollis tortor tortor sagittis diam.');
INSERT INTO curso (materia, ementa)
VALUES ('Javascript', 'Morbi venenatis pulvinar orci, at consequat justo consectetur sed. Proin varius mollis fermentum. Cras risus lacus.');
INSERT INTO curso (materia, ementa)
VALUES ('Fotografia', 'Quisque ligula libero, varius id molestie ut, pulvinar sed eros. Maecenas cursus, erat sed rhoncus efficitur.');
INSERT INTO curso (materia, ementa)
VALUES ('Inteligência Emocional', 'Maecenas cursus, erat sed rhoncus efficitur, sapien metus facilisis turpis, ac pellentesque nunc nulla gravida ipsum.');
INSERT INTO curso (materia, ementa)
VALUES ('Redes de Computadores', 'Aenean gravida, turpis non rutrum sodales, felis diam feugiat orci, et mollis tortor tortor sagittis diam.');

INSERT INTO espacos (nomeespaco)
VALUES ('Sala Cisco');
INSERT INTO espacos (nomeespaco)
VALUES ('Biblioteca');
INSERT INTO espacos (nomeespaco)
VALUES ('Sala de Jogos');
INSERT INTO espacos (nomeespaco)
VALUES ('Auditório');
INSERT INTO espacos (nomeespaco)
VALUES ('Sala de Aula');

INSERT INTO turma (nometurma)
VALUES ('202202RDS');
INSERT INTO turma (nometurma)
VALUES ('202202PHT');
INSERT INTO turma (nometurma)
VALUES ('202202INT');
INSERT INTO turma (nometurma)
VALUES ('202202JVS');
INSERT INTO turma (nometurma)
VALUES ('202202FTG');

