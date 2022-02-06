# Fundamentos de C em Pseudocódigo parte2

> ATENÇÃO
> 
> 1. Não seja trapaceira(o): jamais utilize um código que você não sabe como funciona ou não sabe explicar;
> 2. Faça as suas anotações: utilize esse doc quando não estiver com as suas anotações; a qualidade do seu raciocínio é insubstituível;
> 3. Peça ajuda: se precisar de ajuda procure os Campers da vila43, faremos de tudo para te ajudar; não se sinta sozinho, tamo junto e misturado;
> 4. Bons estudos!


***LEIA E ENTENDA A PARTE 1 - ESSA É UMA CONTINUAÇÃO DIRETA DE LÁ***

---
## Etapa essencial para mandar bem nas listas de C

### Tema
1. Como reescrever o conteúdo de um programa dentro de ***1 mesmo arquivo***
2. Como dividir um programa em ***2 arquivos separados***


---
#### Como reescrever o conteúdo do programa Bolo 
- Diagrama de bloco: CONTINUA O MESMO da parte1

- abrir um arquivo já escrito

```shell
touch receita_bolo_v2.1
```

- Nessa etapa nós reescrevemos (compare com o receita_bolo_v2.0)

```stylus
//programa receita_bolo_v2.1
#link <utencilios_cozinha.h>
#link <biblioteca_entrada_saida.h>
 
	preparar_receita(ingred o, ingred l, ingred m)
		INICIO
			escreva "Bem-vindo ao programa BOLO :D "
			escreva "Ingredientes Ok!"
	
			m = o + l;

			escreva "Assando bolo..."
			escreva "Bolo pronto, retire-o do forno!"
			escreva ("Quantidade de fatias: {decimal}", massa)
		FIM

INICIO
	// declar + inic
	ingred   ovo_qt;
	ingred   leite_ml;
	ingred   massa;

	ovo_qt = 2;
	leite_ml = 1;

	// proc
	preparar_receita(ovo_qt, leite_ml, massa);
FIM
```

- compilar o programa

```shell
gcc receita_bolo_v2.1
```

- executar o programa

```shell
./a.out
```

- conferir o resultado (testar)

```shell
Bem-vindo ao programa BOLO :D
Ingredientes OK!
Assando o bolo...
Bolo pronto, retire-o do forno!
Quantidade de fatias: 3
```


---
### Como dividir o conteúdo do programa Bolo
- Diagrama de bloco: CONTINUA O MESMO da parte1

- CIRAR UM NOVO arquivo

```shell
touch funcao_receita
```

- colocar a funcao `preparar_receita(o, l, m)` dentro do arquivo `funcao_receita`;
- agora temos dois arquivos separados:

- ***arquivo:*** funcao_receita

```stylus
// funcao_receita
#link <utencilios_cozinha.h>

preparar_receita(ingred o, ingred l, ingred m)

INICIO
	escreva "Bem-vindo ao programa BOLO :D "
	escreva "Ingredientes Ok!"
	
	m = o + l;
	
	escreva "Assando bolo..."
	escreva "Bolo pronto, retire-o do forno!"
	escreva ("Quantidade de fatias: {decimal}", massa)
FIM
```

- ***arquivo:*** receita_bolo_v2.1

```stylus
//programa receita_bolo_v2.1
#link <biblioteca_entrada_saida.h>

preparar_receita(ingred o, ingred l, ingred m);
 
INICIO
	// declar + inic
	ingred   ovo_qt;
	ingred   leite_ml;
	ingred   massa;

	ovo_qt = 2;
	leite_ml = 1;

	// proc
	preparar_receita(ovo_qt, leite_ml, massa);
FIM
```


***PERGUNTA DE OURO: como vamos compilar e testar os 2 arquivos?***

- compilar os 2 programas

```shell
gcc receita_bolo_v2.1 funcao_receita
```

- executar o programa normalmente

```shell
./a.out
```

- conferir o resultado (testar)

```shell
Bem-vindo ao programa BOLO :D
Ingredientes OK!
Assando o bolo...
Bolo pronto, retire-o do forno!
Quantidade de fatias: 3
```
