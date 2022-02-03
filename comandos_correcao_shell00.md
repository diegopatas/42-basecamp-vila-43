# Comandos de Correção lista Shell00

**Clonar o repositório do avaliado**

```$ git clone <link> <nome>```

**Exerc 01**

```bash
$ cat z
```


**Exerc 02**

```$ tar -xf exo2.tar```

```$ ls -la```


**Exerc 03**

```$ mkdir pasta_teste```

```$ touch teste```

```$ bash midLS```


**Exerc 04**

`$ bash git_commit.sh | cat -e`


**Exerc 05**

```$ touch arquivo```

```$ mkdir exemplo```

```$ echo arquivo >> .gitignore ```

```$ echo exemplo >> .gitignore ```

``` bash git_ignore.sh | cat -e ```


**Exerc 06**

```$ wget <link do arquivo resources.tar.gz```

```$ tar -xf <arquivo resources>```

```$ diff a b > sw2.diff```

```$ diff sw2.diff sw.diff```


**Exerc07**

```$ touch \#teste#```

```$ touch teste~```

```$ bash clean```


**Exerc08**

opcao 1

```$ touch teste```

```$ file -m ft_magic teste```

opcao 2 

```$ touch teste```

```$ file -C -m ft_magic```

```$ file -m ft_magic.mgc teste```

saída esperada

```teste: empty```

ou 

```teste: ASCII text, with no line terminators```

ou

```teste: 42 file```
