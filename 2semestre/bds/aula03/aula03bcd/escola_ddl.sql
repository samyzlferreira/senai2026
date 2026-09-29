-- ============================================
-- CRIAÇÃO DO BANCO DE DADOS
-- ============================================

CREATE DATABASE IF NOT EXISTS sistema_escolar;

USE sistema_escolar;


-- ============================================
-- TABELA: ALUNO
-- ============================================

CREATE TABLE aluno (
    id_aluno INT AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    data_nascimento DATE NOT NULL,
    email VARCHAR(100),
    bairro VARCHAR(100),

    CONSTRAINT pk_aluno
        PRIMARY KEY (id_aluno)
);


-- ============================================
-- TABELA: PROFESSOR
-- ============================================

CREATE TABLE professor (
    id_professor INT AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100),
    especialidade VARCHAR(100),

    CONSTRAINT pk_professor
        PRIMARY KEY (id_professor)
);


-- ============================================
-- TABELA: DISCIPLINA
-- ============================================

CREATE TABLE disciplina (
    id_disciplina INT AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    carga_horaria INT NOT NULL,

    CONSTRAINT pk_disciplina
        PRIMARY KEY (id_disciplina)
);


-- ============================================
-- TABELA: TURMA
-- ============================================

CREATE TABLE turma (
    id_turma INT AUTO_INCREMENT,
    id_professor INT NOT NULL,
    id_disciplina INT NOT NULL,
    ano_letivo INT NOT NULL,
    semestre INT NOT NULL,
    sala VARCHAR(20),

    CONSTRAINT pk_turma
        PRIMARY KEY (id_turma),

    CONSTRAINT fk_turma_professor
        FOREIGN KEY (id_professor)
        REFERENCES professor(id_professor),

    CONSTRAINT fk_turma_disciplina
        FOREIGN KEY (id_disciplina)
        REFERENCES disciplina(id_disciplina)
);


-- ============================================
-- TABELA: MATRICULA
-- ============================================

CREATE TABLE matricula (
    id_matricula INT AUTO_INCREMENT,
    id_aluno INT NOT NULL,
    id_turma INT NOT NULL,
    data_matricula DATE NOT NULL,
    status VARCHAR(30),
    nota_final DECIMAL(5,2),

    CONSTRAINT pk_matricula
        PRIMARY KEY (id_matricula),

    CONSTRAINT fk_matricula_aluno
        FOREIGN KEY (id_aluno)
        REFERENCES aluno(id_aluno),

    CONSTRAINT fk_matricula_turma
        FOREIGN KEY (id_turma)
        REFERENCES turma(id_turma)
);