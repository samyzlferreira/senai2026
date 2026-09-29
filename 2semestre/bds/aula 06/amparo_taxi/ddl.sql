CREATE DATABASE IF NOT EXISTS amparo_taxi;
USE amparo_taxi;

-- Tabela motorista
CREATE TABLE IF NOT EXISTS motorista (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100),
    cpf VARCHAR(15),
    cnh VARCHAR(20),
    celular VARCHAR(15),
    email VARCHAR(100),
    obs TEXT,
    status ENUM('ATIVO', 'INATIVO')
);

-- Tabela veiculo
CREATE TABLE IF NOT EXISTS veiculo (
    placa VARCHAR(10) PRIMARY KEY,
    modelo VARCHAR(20),
    marca VARCHAR(20),
    cor VARCHAR(20),
    ano INT(11),
    motorista_id INT(11),
    CONSTRAINT fk_veiculo_motorista FOREIGN KEY (motorista_id) REFERENCES motorista(id)
);

-- Tabela passageiro
CREATE TABLE IF NOT EXISTS passageiro (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100),
    cpf VARCHAR(15),
    celular VARCHAR(15),
    email VARCHAR(100),
    obs TEXT,
    status ENUM('ATIVO', 'BANIDO')
);

-- Tabela viagem
CREATE TABLE IF NOT EXISTS viagem (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    passageiro_id INT(11),
    placa VARCHAR(10),
    valor DECIMAL(10,2),
    origem VARCHAR(50),
    hora_partida DATETIME,
    destino VARCHAR(50),
    hora_chegada DATETIME,
    avaliacao_motorista INT(11),
    avaliacao_passageiro INT(11),
    CONSTRAINT fk_viagem_passageiro FOREIGN KEY (passageiro_id) REFERENCES passageiro(id),
    CONSTRAINT fk_viagem_veiculo FOREIGN KEY (placa) REFERENCES veiculo(placa)
);