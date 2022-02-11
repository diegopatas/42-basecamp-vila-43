---
Aliases: 
---
# Fundamentos de C: C pointers

- **Declaração simples**

```c
int main(void)
{
	int x;
	int *p;

	p = &x;
	*p = 18;
	// Quanto vale x? Quanto vale p?
	// Ponteiros guardam somente endereços
	// *p redirecionam os valores justamente pra onde apontam
}

```

- **Ponteiro: mudando o alvo**

```c
int main(void)
{
	int x;
	int y;
	int *p;

	p = &x;
	*p = 18;
	*p = 252;
	p = &y;
	*p = 9;
	*p = 524;

	// quanto vale x?
	// quanto vale y?
	// quanto vale p?
}

```


---
- **Ponteiro para um array (vetor): parte 1**

```c
int main(void)
{
	int vetor[3];
	int *p;

	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = 2;
	vetor[3] = 7;

	p = vetor;

	// problema: para onde p aponta?
	// vetor[0]?, vetor[2]...?

	// um ponteiro sempre aponta para o inicio, logo

	*p = 10;
	// E agora, quanto vale vetor[0]?, vetor[2]...?
}

```


- **Ponteiro para um array (vetor): parte 2**

```c
int main(void)
{
	int vetor[3];
	int *p;

	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = 2;
	vetor[3] = 7;

	p = vetor;
	*p = 10; // isso implica vetor[0] = 10;

	// Como apontar para vetor[2]? simples, faça:
	p = &vetor[2];
	*p = 11; // agora, isso implica vetor[2] = 11
}

```


---
- **Percorrendo o vetor: parte 1**

```c
#include <unistd.h>

int main(void)
{
	int vetor[3];
	int *p;

	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = 2;
	vetor[3] = 7;

	p = vetor;
	p++; // agora p aponta para vetor[1]
}

```


- **Percorrendo o vetor: parte 2**

```c
#include <unistd.h>

int main(void)
{
	int vetor[3];
	int *p;

	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = 2;
	vetor[3] = 7;

	p = vetor;
	p += 2; // agora p aponta para vetor[1]
}

```


---
- **Ponteiros void: como apontar para qualquer tipo**

```c
int main(void)
{
	int x;
	int *ip;    // i de int
	void *pv;   // v de void

	x = 342;
	ip = &x;    // ip recebe SÓ int type
		vp = ip;    // vp recebe QUALQUER type

	*vp = &x;   // void aponta pra int
}

```


- **Ponteiros: `char *str`** 

```c
int main(void)
{
	char *str;

	str = "Hello world!";
}

```


- **Escopo global: Ponteiro vs Return (x)** 

```c
int main(void)
{
	void ft_ft(int *nbr)
	{
		*nbr = 42;
	}

	int main(void)
	{
		int x;
		int *p;
		
		x = 18;
		p = &x;
		ft_ft(p);
	}
}

```


```c
void ft_ft(int yb)

{
	yb = 42;
	return (yb)
}

int main(void)
{
	int x;
	int var_x;
	
	x = 252;
	var_x = ft_ft(x);
}

```

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
