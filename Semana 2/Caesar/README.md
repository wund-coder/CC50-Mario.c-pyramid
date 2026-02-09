# Caesar - CC50

Programado em C.
Iniciamos a semana 2 do CC50 com a cifra de César. 
Cifra de César basicamente é um método clássico e simples de criptografia de substituição, onde cada letra do texto original é trocada por outra situada um número fixo de posições à frente ou atrás no alfabeto.
O computador não enxerga letras, apenas números, cada letra que ele imprime é um número para ele, pesquisando a tabela ASCII é possível ver o número de cada sinal ou letra para o computador.
O intuito do projeto é criptografar uma mensagem, o usuário será solicitado um texto ou palavra e o projeto irá criptografar automaticamente em formato de Ceasar.

-Como Funciona?
O programa ao ser executado solicitará uma "chave", essa chave será o número de casas que o projeto pulará para criptografar a mensagem, por exemplo:
A na tabela ASCII é a numeração 65, caso a chave escolhida seja 10, a letra 'A' se tornará 'K', pois o número dele é 75 e assim por diante.
As letras maiúsculas continuam maiúsculas e as minúsculas continuam minúsculas! O programa ignora pontuação.
O projeto possui um looping na letra 'Z', retornando a letra 'A' após chegar no fim do alfabeto, evitando que o projeto quebre.
Caso o usuário por curiosidade coloque na chave algo como "400...", números superiores a 26, o projeto vai dividir a chave que lhe foi dada por 26.
400 ÷ 26 = 15,384...
15 x 26 = 390
400 - 390 = 10.
Ou seja, o programa entenderá que deve pular 10 números para frente!


Como executar
```text
$ make caesar

$ ./caesar 2 ----> (chave)

Entrada: HELLO

H + 2 = J

E + 2 = G

L + 2 = N

L + 2 = N

O + 2 = Q

Saída: JGNNQ
