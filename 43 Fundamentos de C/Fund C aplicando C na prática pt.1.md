# Fundamentos C: aplicando a linguagem na prática

> ATENÇÃO
> 
> 1. Não seja trapaceira(o): jamais utilize um código que você não sabe como funciona ou não sabe explicar;
> 2. Faça as suas anotações: utilize esse doc quando não estiver com as suas anotações; a qualidade do seu raciocínio é insubstituível;
> 3. Peça ajuda: se precisar de ajuda procure os Campers da vila43, faremos de tudo para te ajudar; não se sinta sozinho, tamo junto e misturado;
> 4. Bons estudos!


## Algoritmos e Programas em C

***Ou como preparar um bolo com o seu PC***

---
### Programa: receita_bolo.c

- FLUXO DE TRABALHO
	- criar um arquivo
	- escrever o programa
	- compilar o programa
	- executar o programa
	- conferir o resultado (testar)


- Diagrama de bloco: a estrutura do nosso programa

```mermaid
	flowchart TD
	Inicio -->
	om[Olá mundo! Eu sou um bolo.] -->
	Fim
```


- criar um arquivo

```shell
touch receita_bolo.c
```

- escrever o programa

```C
//programa receita_bolo.c
#include <stdio.h>

int main(void)
{
	printf("Olá mundo! Eu sou um bolo.");
}
```

- compilar o programa

```shell
gcc receita_bolo.c
```

- executar o programa

```shell
./a.out
```

- conferir o resultado (testar)

```shell
Olá mundo! Eu sou um bolo.
```


### Programa: receita_bolo_1.c

- Diagrama de bloco: a estrutura do nosso programa

```mermaid
	flowchart TD

	bg([Início]) -->
	bv[Bem-vindo ao programa bolo] -->
	iok[Ingredientes Ok!] -->
	ab[Assando bolo...] -->
	bp[Bolo pronto, retire-o do forno] -->
	qte[Quantidade de fatias: 3] -->
	fim([Fim])
```

- criar um arquivo

```shell
touch receita_bolo_1.c
```

```c
//programa receita_bolo_1.c
#include <stdio.h>

int main(void)
{
	int ovo_qt;
	int leite_ml;
	int massa;

	ovo_qt = 2;
	leite_ml = 1;

	printf("Bem-vindo ao programa BOLO :D ");
	printf("Ingredientes Ok!");
	
	massa = ovo_qt + leite_ml;

	printf("Assando bolo...");
	printf("Bolo pronto, retire-o do forno!");
	printf("Quantidade de fatias: %d", massa);
}
```

- compilar o programa

```shell
gcc receita_bolo_1.c
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
