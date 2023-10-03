-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE usuario (
nome varchar(50),
email varchar (25),
senha varchar (8),
cod_usuario int PRIMARY KEY generated always as identity,
cod_curso int );
-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE emprestimo (
hora varchar(5),
data date,
cod_emprestimo int PRIMARY KEY generated always as identity,
cod_atendente int,
cod_usuario int,
FOREIGN KEY(cod_usuario) REFERENCES usuario (cod_usuario)
);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE atendente (
nome varchar (50),
email varchar (25),
cod_atendente int PRIMARY KEY generated always as identity
);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE livro (
titulo varchar (50),
edicao varchar (50),
ano_publicacao int,
isbn varchar (10),
cod_livro int PRIMARY KEY generated always as identity
)
-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE curso (nome varchar (50),
cod_curso int PRIMARY KEY generated always as identity
)
-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE emprestimo_livro (
emprestado SMALLINT,
data_prevista_entrega date,
cod_emprestimo int,
cod_livro int,
FOREIGN KEY(cod_emprestimo) REFERENCES emprestimo (cod_emprestimo),
FOREIGN KEY(cod_livro) REFERENCES livro (cod_livro) );
ALTER TABLE usuario ADD FOREIGN KEY(cod_curso) REFERENCES
curso (cod_curso);
ALTER TABLE emprestimo ADD FOREIGN KEY(cod_atendente) REFERENCES
atendente (cod_atendente);





-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into atendente (nome,email) values ('atendente01','atendente01@hotmail.com');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into atendente (nome,email) values ('atendente02','atendente02@hotmail.com');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into atendente (nome,email) values ('atendente03','atendente03@hotmail.com');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into atendente (nome,email) values ('atendente04','atendente04@hotmail.com');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into atendente (nome,email) values ('atendente05','atendente05@hotmail.com');
-- SQLINES LICENSE FOR EVALUATION USE ONLY


insert into curso (nome) values ('informática');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into curso (nome) values ('Biotecnologia');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into curso (nome) values ('Agroecologia');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into curso (nome) values ('Eletrônica');
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into curso (nome) values ('Automação');
-- SQLINES LICENSE FOR EVALUATION USE ONLY

select * from usuario
insert into usuario (nome,email,senha,cod_curso) values
('Douglas Juliani','douglas.juliani@','12345678',6);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into usuario (nome,email,senha,cod_curso) values
('Janaina','jana@ifsc.edu.br','12345678',7);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into usuario (nome,email,senha,cod_curso) values
('Fedra','douglas.juliani@','12345678',8);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into usuario (nome,email,senha,cod_curso) values
('Alex','alex@ifsc.edu.br','12345678',9);

-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into usuario (nome,email,senha,cod_curso) values
('Juliano','juliano@ifsc','12345678',6);

-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into livro (titulo,edicao,ano_publicacao,isbn) values ('Banco de
Dados','Editora Juliani','2007',33334444);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into livro (titulo,edicao,ano_publicacao,isbn) values ('Lógica de Programação','Editora
Pearson','2010',33335555);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into livro (titulo,edicao,ano_publicacao,isbn) values ('Engenharia de Software','Editora
Pearson','2009',33336666);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into livro (titulo,edicao,ano_publicacao,isbn) values ('Scrum','Editora
Pearson','2011',33337777);


-- SQLINES LICENSE FOR EVALUATION USE ONLY

insert into emprestimo (hora,data,cod_atendente,cod_usuario) values ('14:00','2012-07-03',6,5);
insert into emprestimo (hora,data,cod_atendente,cod_usuario) values ('15:00','2012-07-30',7,2);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into emprestimo_livro (emprestado,data_prevista_entrega,cod_emprestimo,cod_livro) values (1,'2012-08-15',3,1);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into emprestimo_livro (emprestado,data_prevista_entrega,cod_emprestimo,cod_livro)
values (1,'2012-08-15',3,2);
-- SQLINES LICENSE FOR EVALUATION USE ONLY

insert into emprestimo_livro (emprestado,data_prevista_entrega,cod_emprestimo,cod_livro) values (1,'2012-08-15',4,3);
-- SQLINES LICENSE FOR EVALUATION USE ONLY
insert into emprestimo_livro (emprestado,data_prevista_entrega,cod_emprestimo,cod_livro) values (1,'2012-08-15',4,3);