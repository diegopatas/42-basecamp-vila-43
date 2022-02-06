# Fundamentos C: aplicando a linguagem na prática

> ATENÇÃO
> 
> 1. Não seja trapaceira(o): jamais utilize um código que você não sabe como funciona ou não sabe explicar;
> 2. Faça as suas anotações: utilize esse doc quando não estiver com as suas anotações; a qualidade do seu raciocínio é insubstituível;
> 3. Peça ajuda: se precisar de ajuda procure os Campers da vila43, faremos de tudo para te ajudar; não se sinta sozinho, tamo junto e misturado;
> 4. Bons estudos!

***LEIA E ENTENDA A PARTE 1 - ESSA É UMA CONTINUAÇÃO DIRETA DE LÁ***

---
## Etapa essencial para mandar bem nas listas de C

### Como dividir o conteúdo do programa receita_bolo_1.c
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
#include <stdio.h>

void preparar_receita(int o, int l)
{
	printf("Bem-vindo ao programa BOLO :D ");
	printf("Ingredientes Ok!");
	
	m = o + l;

	printf("Assando bolo...");
	printf("Bolo pronto, retire-o do forno!");
	printf("Quantidade de fatias: %d", m);
}
```

- ***arquivo:*** receita_bolo_v2.1

```c

int main(void)
{
	int ovo_qt;
	int leite_ml;
	int massa;

	ovo_qt = 2;
	leite_ml = 1;

	preparar_receita(ovo_qt, leite_ml);
}
``````


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
