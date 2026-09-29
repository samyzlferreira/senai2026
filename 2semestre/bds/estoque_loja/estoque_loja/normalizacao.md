# Normalização

A normalização serve para deixar o banco de dados mais organizado e evitar
que as mesmas informações fiquem repetidas.

## 1ª Forma Normal (1FN)

Cada campo tem uma informação só e não tem dados repetidos na mesma coluna, para nao ficar desorganizado.

Separei as informações em 5 tabelas:

Categoria
Fornecedor
Produto
Estoque
Movimentação de Estoque


## 2ª Forma Normal (2FN)

Cada informação está relacionada à sua própria tabela.
As tabelas se relacionam usando os IDs.
Por exemplo, os dados do fornecedor ficam na tabela Fornecedor e os dados
do produto ficam na tabela Produto.


## Conclusão

A normalização deixou o banco mais organizado, evitando informações
repetidas e facilitando o uso dos dados.