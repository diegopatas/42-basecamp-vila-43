# Comandos de Correção lista Shell00
---

**Clonar o repositório do avaliado**

```bash
git clone <link> <nome>
```

---


**Exerc 01**

```bash
cat z
```


**Exerc 02**

```bash
tar -xf exo2.tar
```

```bash
ls -la
```


**Exerc 03**

```bash
mkdir pasta_teste
```

```bash
touch teste
```

```bash
bash midLS
```


**Exerc 04**

```bash
bash git_commit.sh | cat -e
```


**Exerc 05**

```bash
touch arquivo
```

```bash
mkdir exemplo
```

```bash
echo arquivo >> .gitignore
```

```bash
echo exemplo >> .gitignore
```

```bash
bash git_ignore.sh | cat -e 
```


**Exerc 06**

```bash
wget <link_arquivo_resources>
```

```bash
tar -xvf <arquivo resources>
```

```bash
diff a b > sw2.diff
```

```bash
diff sw2.diff sw.diff
```


**Exerc07**

```bash
touch \#teste#
```

```bash
touch teste~
```

```bash
bash clean
```


**Exerc08**

opcao 1

```bash
touch teste
```

```bash
file -m ft_magic teste
```

ou 

opcao 2 

```bash
touch teste
```

```bash
file -C -m ft_magic
```

```bash
file -m ft_magic.mgc teste
```

---
saída esperada

```bash
teste: empty
```

ou 

```bash
teste: ASCII text, with no line terminators
```

ou

```bash
teste: 42 file
```
