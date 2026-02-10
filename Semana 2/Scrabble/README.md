# Scrabble - CC50

Scrabble foi o primeiro exercício da semana 2 do CC50! Scrabble é um jogo de palavras, aonde o jogador 1 jogará contra o jogador 2.

Como o projeto funciona?

O programa irá solicitar ao jogador 1 uma palavra, e logo em seguida fará o mesmo ao jogador 2.
Nesse jogo, cada letra possui uma quantidade pontos, os pontos de cada letra estarão logo abaixo!

### Tabela de Pontuação (Scrabble)

Para este projeto, utilizamos uma tabela de valores onde cada letra possui uma pontuação específica:

| Letra | Valor | Letra | Valor | Letra | Valor | Letra | Valor |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **A** | 1     | **H** | 4     | **O** | 1     | **V** | 4     |
| **B** | 3     | **I** | 1     | **P** | 3     | **W** | 4     |
| **C** | 3     | **J** | 8     | **Q** | 10    | **X** | 8     |
| **D** | 2     | **K** | 5     | **R** | 1     | **Y** | 4     |
| **E** | 1     | **L** | 1     | **S** | 1     | **Z** | 10    |
| **F** | 4     | **M** | 3     | **T** | 1     |       |       |
| **G** | 2     | **N** | 1     | **U** | 1     |       |       |

> **Dica:** No código em C, você pode mapear esses valores usando um array de inteiros, onde o índice `0` corresponde à letra 'A'.

O objetivo do jogo é tirar a maior pontuação possível em uma palavra.
O jogador que mais obteve pontos na palavra, obviamente se torna o vencedor!

