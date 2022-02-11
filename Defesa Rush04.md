---
Aliases: 
---
# Defesa Rush04

## Como funciona? 

- Executamos pelo terminal fazendo `opcao #col #lin`; ex `./rush04.out 252 9`;
- Isso por que o bônus propunha a aceitação de argumentos pela linha de comando;
- Ele imprime o desenho de acordo com o desafio.

## Como está estruturado?
- Nós temos o pp `main.c` que executa uma rotina comum não importa o rush, ou seja, demos um funcionamento comum aos rush, onde o que muda é apenas o padrão de desenho;
- Também temos ao arq `rush04.c` que desenha os caracteres na saída padrão, ou seja, no terminal;
- Essa parte do programa utiliza três recursos;
1. Um função (um recurso) que desenha (imprime) a primeira linha que possui o padrão pedido no projeto;
2. Um função que imprime a última linha que também tem um padrão específico;
3. E por fim, tem um função que imprime as linhas do meio, que são iguais;
- Por fim, temos o arq `ft_putchar.c` cuja função é justamente imprimir um caracter por vez na saída.

  

## Detalhes do programa

### De baixo pra cima
- A função que imprime caracter na tela é chamada pelas funções que imprimem a primeira linha, as linhas do meio, se houver, e a última também se houver;
- As funções que imprimem a primeira, a do meio e a última linha trabalham em conjunto e estão dentro de cada rush;
- Então o programa chama o rush após receber os parâmetros (desenho deseja, #col, #lin).

### De cima pra baixo
- Você executa o bin fazendo ./rush0X.out col lin;
- O programa exige que você dê o número de col E o de linhas, pois ele funciona somente se houver 3 argc (lembrando que o primeiro é sempre o próprio binário, isto é, ./rush0X.out);
- Você não pode criar um retângulo (0,0) ou (-x,-y);
1. Isso não existe;
2. O programa verifica essa condição na função principal de cada rush.0X.c quando ele condiciona a execução das impressões das linhas pedindo #col >= 1 OU #lin >=1; nesses casos o programa ainda funciona, ele somente retorna vazio e não desenha nada;
- O #col #lin são aceitos como char a partir do terminal, então nós necessitamos convertê-los usando seu valor da tabela ASCII, da seguinte forma:
- digamos que sejam pedidos 122col e 43lin;
- primeiro convertemos cada char de 122 em seu respectivo int, através de um laço, para obter a centena 1, a dezena 2 e o dicimal 2;
- terminada essa essa etapa, fazemos o mesmo em cada char de linha através de um novo laço que funciona do mesmo jeito;
- próxima etapa, nós damos os valores de col e lin, já convertidos em int, como parâmetros para a função rush(col, lin);
- a função rush executa primeiro a instrução "imprimir primeira linha", segue para a instrução "imprimir linha do meio", e por fim chama a "imprimir última linha";
- nessa etapa fazemos uso da função que imprime de fato o char na saída, da seguinte forma:
- desenhamos o primeiro char da linha um, que é o char 'A', obrigatoriamente;
- se houver mais colunas nessa linha, desenhamos o char 'B', até antes da útima coluna, que precisa ter o char 'C', impresso somente quando o laço acaba;
- a seguir, descemos uma linha imprimindo a quebra '\n';
- agora verificamos, se a próxima linha for a última, então rodamos a função que imprime a última linha, cuja lógica é a mesma da primeira linha, porém o char 'C' é impresso na primeira col e o char 'A' na última;
- mas se houver 3 linhas ou mais, a gente imprime as linhas intermediárias, imprimindo o char 'B' na primeira e última col, e preenchendo as demais col com o char ' ' dando o efeito de vazio;
- Acabadas essas instruções, o programa termina.


---
ID: 
Tag: [[]]
Type: #type/ 
Status: #status/potting  
PRVS: 
NXT: 
BRNCH: 

%%napkin - noeud - moc - source - hub - project%%
%%potting - sown - harvest%%

