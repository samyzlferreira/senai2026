USE estoque_loja;

INSERT INTO categoria (id, nome, descricao) VALUES
(1, 'Calça', 'parte de baixo'),
(2, 'blusa', 'parte de cima'),
(3, 'saia', 'parte de baixo'),
(4, 'moletom', 'agasalho');



INSERT INTO fornecedor (id, razao_social, nome_fantasia, cnpj, telefone, email, endereco) VALUES
(1, 'c&a LTDA', 'c&a', '1234567891011', '(19) 99737-6556', 'c&a@gmail.com', 'Rua Rio Reno, 14, Jd. Figueira, Amparo - SP'),
(2, 'renner LTDA', 'renner', '09876543211234', '(19) 99847-0825', 'renner@gmail.com', 'Rua Rio Pó, 15, Jd. Figueira, Amparo - SP'),
(3, 'youcom LTDA', 'youcom', '78906543211234', '(19) 99874-8052', 'youcom@gmail.com', 'Rua Rio Tibre, 16, Jd. Figueira, Amparo - SP'),
(4, 'gap LTDA', 'gap', '12345678900987', '(19) 99797-3565', 'gap@gmail.com', 'Rua Rio Eufrates, 17, Jd. Figueira, Amparo - SP');



INSERT INTO produto (id, nome, descricao, preco, marca, id_categoria, id_fornecedor) VALUES
(1, 'Camiseta Básica', 'Camiseta de algodão', 100, 'c&a', 1, 1),
(2, 'Calça Jeans', 'Calça jeans escuro', 293, 'renner', 2, 2),
(3, 'saia de couro', 'saia de couro marrom', 302, 'youcom', 3, 3),
(4, 'moletom c/ capuz', 'moletom de algodão', 1500, 'gap', 4, 4);



INSERT INTO estoque (id_estoque, id_produto, quantidade, quantidade_minima, localizacao) VALUES
(1, 1, 50, 20, 'arara a'),
(2, 2, 30, 10, 'prateleira a '),
(3, 3, 25, 10, 'arara b'),
(4, 4, 15, 5, 'prateleira b ');


INSERT INTO movimentacao_estoque (id_movimentacao, id_produto, tipo, quantidade, data) VALUES
(1, 1, 'Saída', 10, '2026-09-02'),
(2, 2, 'Entrada', 20, '2026-09-03'),
(3, 3, 'Saída', 5, '2026-09-04'),
(4, 4, 'Entrada', 10, '2026-09-05');