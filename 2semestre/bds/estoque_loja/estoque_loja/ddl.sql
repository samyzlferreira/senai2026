CREATE DATABASE estoque_loja;

USE estoque_loja;

CREATE TABLE categoria (
    id INT(11) PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    descricao VARCHAR(100)
);

CREATE TABLE fornecedor (
    id INT(11) PRIMARY KEY AUTO_INCREMENT,
    razao_social VARCHAR(100) NOT NULL,
    nome_fantasia VARCHAR(100) NOT NULL,
    cnpj VARCHAR(14) NOT NULL,
    telefone VARCHAR(11),
    email VARCHAR(100),
    endereco VARCHAR(100)
);

CREATE TABLE produto (
    id INT(11) PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    descricao VARCHAR(255),
    preco DECIMAL(10,2) NOT NULL,
    marca VARCHAR(100),
    id_categoria INT(11) NOT NULL,
    id_fornecedor INT(11) NOT NULL,

    FOREIGN KEY (id_categoria) REFERENCES categoria(id),
    FOREIGN KEY (id_fornecedor) REFERENCES fornecedor(id)
);

CREATE TABLE estoque (
    id_estoque INT(11) PRIMARY KEY AUTO_INCREMENT,
    id_produto INT(11) NOT NULL,
    quantidade INT(11) NOT NULL,
    quantidade_minima INT(11) NOT NULL,
    localizacao VARCHAR(100),

    FOREIGN KEY (id_produto) REFERENCES produto(id)
);

CREATE TABLE movimentacao_estoque (
    id_movimentacao INT(11) PRIMARY KEY AUTO_INCREMENT,
    id_produto INT(11) NOT NULL,
    tipo VARCHAR(100) NOT NULL,
    quantidade INT(100) NOT NULL,
    data DATE NOT NULL,

    FOREIGN KEY (id_produto) REFERENCES produto(id)
);