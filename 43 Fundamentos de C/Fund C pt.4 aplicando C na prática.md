# Fundamentos C parte 4: aplicando a linguagem C na prática

> ATENÇÃO
> 
> 1. Não seja trapaceira(o): jamais utilize um código que você não sabe como funciona ou não sabe explicar;
> 2. Faça as suas anotações: utilize esse doc quando não estiver com as suas anotações; a qualidade do seu raciocínio é insubstituível;
> 3. Peça ajuda: se precisar de ajuda procure os Campers da vila43, faremos de tudo para te ajudar; não se sinta sozinho, tamo junto e misturado;
> 4. Bons estudos!

***LEIA E ENTENDA A PARTE 1 - ESSA É UMA CONTINUAÇÃO DIRETA DE LÁ***

## Etapa essencial para entender as listas iniciais de C

---
### Vamos reorganizar e separar as funcionalidades do nosso programa

- vamos CIRAR UM NOVO arquivo chamado `ft_receita.c`

```shell
touch ft_receita.c
```

- o conteúdo do arquivo `ft_receita.c` poderia ser da seguinte forma:

```c
// funcao_receita.c
#include <stdio.h>

void preparar_receita(void)
{
	int ovo_qt;
	int leite_ml;
	int massa;

	ovo_qt = 2;
	leite_ml = 1;

	printf("Bem-vindo ao programa BOLO :D \n");
	printf("Ingredientes Ok!\n");
	
	massa = ovo_qt + leite_ml;

	printf("Assando bolo...\n");
	printf("Bolo pronto, retire-o do forno!\n");
	printf("Quantidade de fatias: %d\n", massa);
}
```

- agora repare que simplificamos nosso programa `main.c`

```c
#include <stdio.h>

void preparar_receita(void); //declaração necessária

int main(void)
{
	preparar_receita();
}
``````


***PERGUNTA DE OURO: como vamos compilar e testar os 2 arquivos?***

- compilar os 2 programas no mesmo comando, conforme:

```shell
gcc main.c ft_receita.c
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


---
---
# Conclusão

> Esse tutorial mostrou:
> 1. o que é um algoritmo;
> 2. como usar um pseudocódigo para entender uma linguagem de programação real;
> 3. como criar um programa receita de bolo usando C e testá-lo;
> 4. como compilar e executar 2 arquivos C que estejam conectados;


## Próximos passos:

> Descubra como utilizar as flags do comando `gcc` 
> Descubra como utilizar o comando `norminette`


### Repasse o conhecimento!
> Sempre que puder, repasse seus conhecimentos
> Bons estudos!