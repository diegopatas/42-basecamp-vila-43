#include <stdio.h>

void mensagem(void)
{
    char *mensagem;
    int leite;
    char *ingrediente;

    leite = 2;
    ingrediente = "Leite";
    mensagem = "Olá mundo! Eu sou uma mensagem!";

    printf("%s", mensagem);
    printf("%s: ", ingrediente);
    printf("%d", leite);
    printf("\n");
};

int main(void)
{
    mensagem();

}
