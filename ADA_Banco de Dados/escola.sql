--criando a tabela livros--
CREATE TABLE livros (
	id_livro integer,
	nome varchar(15),
	autor varchar(40),
	sinopse varchar(40),
	id_disciplina integer,
	primary key(id_livro),
	foreign key (id_disciplina) references disciplinas(id_disciplina)
)

-- inserindo dados na tabela disciplinas--
INSERT INTO disciplinas values (
    1,
    'portugues',
    'literatura e gramática'
)

-- buscando registros na tabela disciplinas --
SELECT * FROM disciplinas
SELECT * FROM disciplinas WHERE nome = 'geografia'

-- buscando registros na tabela disciplinas com busca binária --
--criando indice--
CREATE INDEX idx_nome ON disciplinas(nome)

-- inserindo outros dados na tabela disciplinas--
INSERT INTO disciplinas values 
(
    2,
    'matemática',
    'algebra e geometria'
),
(
    3,
    'física',
    'cinemática e dinâmica'
);

--importando dados de um documento csv--
COPY disciplinas(id_disciplina, nome, ementa) FROM 'C:\xampp\htdocs\estudos\ADA_Banco de Dados\disciplinas.csv' DELIMITER ',' CSV HEADER;

--corrigindo dados de um registro--
UPDATE disciplinas SET nome = 'mecatrônica' WHERE id_disciplina = 8

-- apagando uma disciplina --
DELETE FROM disciplinas WHERE id_disciplina = 8

-- view é uma "mascara" que é colocada sobre os dados do banco de dados --
CREATE VIEW matricula_com_sigilo AS
(
    SELECT 
        id_matricula,
        id_aluno,
        validade
    FROM matricula
)