# Comandos de Correção lista Shell00

### git clone

'$ git clone <link> <nome_pasta>'

### ex00

$ cat z

### ex01

1.  _Comandos para avaliações:_ 
2. 
3. **Exerc 01**
    
    `$ cat z `
	
  
    **Exerc 02** -
    
    ```
     tar -xf exo2.tar 
    ```
    
    -
    
    ```
    ls -la 
    ```
    
    (Verificar permissões, tamanho e data) **Exerc 03** -criar pasta e arquivo (
    
    ```
     mkdir pasta 
    ```
    
    ,
    
    ```
     touch arquivo 
    ```
    
    ) **Exerc 04** -
    
    ```
    bash git_commit.sh | cat -e
    ```
    
    **Exerc 05**
    
    ```
     touch arquivo
    ```
    
    ,
    
    ```
     mkdir exemplo 
    ```
    
    ```
     echo arquivo >> .gitignore 
    ```
    
    ```
     echo exemplo >> .gitignore 
    ```
    
    ```
     bash git_ignore.sh | cat -e 
    ```
    
    **Exerc 06**
    
    ```
     wget link para baixar o sw.diff 
    ```
    
    ```
     path a -o b < sw.diff 
    ```
    
    ```
     diff a b > sw.diff 
    ```
    
    **Exerc07**
    
    ```
     touch \#arquivo# 
    ```
    
    ```
     touch teste~ 
    ```
    
    ```
     find . -type f \( -name '#*#' -o -name '*~' \) -print -delete 
    ```
    
    **Exerc08**
    
    ```
     file -C -m ft_magic(para gerar o .mgc) e file -m ft_magic.mgc <arquivo de teste> ou file -m ft_magic <arquivo de teste> 
    ```