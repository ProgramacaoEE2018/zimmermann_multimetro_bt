# ESCOPO:

O projeto visa a adapta��o de um mult�metro para possibilitar a transfer�ncia de dados
e controlar as fun��es do aparelho por um computador ou dispositivo de controle remoto com display.

Este projeto tem como objetivo a melhoria do desempenho de eletricistas em medi��es de circuitos, desde pequenas placas � caixas 
de for�a, permitindo maior acessibilidade e controle das informa��es, sem riscos de ocorrerem interferencias ou 
acidentes durante as medidas. Poder� servir tamb�m para obter diferentes dados de um circuito sem a necessidade de 
estar pr�ximo ou interferir em tal.

# TUTORIAL:

O tutorial utilizado foi do seguinte link: <https://www.youtube.com/watch?v=Y1c-ieVO-UY> (onde come�a a parte pr�tica).
Aprendi o b�sico para come�ar a montar a User Interface.

Para a aula 4 fiz o basico:

![Primeira janela](Capture.PNG)

Ap�s apertar o bot�o temos:

![Apertado o bot�o](Apertou.PNG)

Para ser mais sucinto, coloquei o conte�do da aula 5 e 6 no mesmo arquivo:

![Aula 5 e 6](Aula_5_6.PNG)

As outras 27 aulas ser�o feitas conforme surja necessidade de mais ferramentas.

Alem dessas videoaulas, tamb�m fiz uma do link: <https://www.youtube.com/watch?v=NXSQf1GjjZU&list=PL0meOoSt675fF8xBzifArQyGwfZ-39SGA>

![Nome e hora do dia](Hora.PNG)

# DOCUMENTA��O

O fluxograma do projeto foi:

![Fluxograma](Fluxograma.PNG)

E o diagrama de classes foi o seguinte:

![Diagrama de classes](Diagrama_classe.PNG)


# ESBO�O*:

A ideia inicial � que primeiro o usu�rio abre a janela principal, com as fun��es a seguir:

![Janela inicial](Principal.PNG)

Ainda irei implementar a possibilidade de ler a descri��o da fun��o ao deixar o cursor do mouse por cima do bot�o.
Clicando em "Ir para o Mult�metro", uma nova janela ser� aberta, para explorar fun��es mais pr�ticas do aparelho:

![Mult�metro](Mult.PNG)

As fun��es dispon�veis s�o intuitivas e h� a possibilidade de voltar para o menu principal.
Em caso de erros ao ligar o aparelho (apertar On para come�ar as medi��es), uma mensagem de erro aparecer�.

*A GUI evoluiu durante o desenvolvimento do projeto, adicionando bot�es e uma nova janela.


![Novo Menu Principal](Menu_principal.PNG)

![Escolha de Faixa (e fun��o)](Faixa.PNG)


# ADI��O DOS ARQUIVOS

Os arquivos do esbo�o do projeto foram adicionados � pasta Esboco.
Para o funcionamento completo do programa falta encontrar as bibliotecas espec�ficas do mult�metro e fazer alguns ajustes na programa��o.
Tentarei acertar os erros e melhorar o programa o quanto antes.

# PARTE FINAL

N�o consegui fazer com que para certos intervalos da roda da janela "Mult�metro remoto" o LED mudasse o display.
Caso a mudan�a de fun��o pela roda n�o esteja funcionando, ainda � poss�vel mudar o modo do mult�metro pela janela "Faixa".
Para conferir se as outras fun��es est�o de acordo, seria necess�ria a biblioteca utilizada pelo mult�metro, a qual n�o consegui baixar.
Para que seja poss�vel testar a interface, deixei o c�digo real (que precisaria das bibliotecas) como coment�rio.

# INSTRU��ES

Para a compila��o do programa ser�o necess�rios todos os arquivos da pasta "Esbo�o" e o pacote de bibliotecas b�sicas do Qt.
(Principais: iostream, string, QString).
Para realizar o teste basico, basta dar Run no projeto "Esbo�o" (Qt).
Por�m, para fazer um teste real com o mult�metro, ser� necess�rio adicionar ao projeto as bibliotecas de f�brica do mult�metro,
dando "include" em todos os arquivos .cpp e trocando os c�digos provis�rios pelos que est�o em coment�rio.

Obs: 
Os c�digos utilizados foram os do site: [Link do c�digo utilizado como base](https://sigrok.org/wiki/Agilent_U12xxx_series#CONF.3F)
Para os modelos U123xx.