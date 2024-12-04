#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

/*
struct struct_ender
{
char rua[30];
int num;
char bairro[30];
char cidade[30];
};

struct struct_pessoa
{
char nome[30];
int idade;
struct struct_ender ender_resid;
struct struct_ender ender_comer;
} ;

1) Crie uma função para ler os dados de uma estrutura do tipo struct_pessoa;

2) Crie uma função para mostrar os dados de uma estrutura do tipo struct_pessoa;
*/





int main()
{

    struct struct_pessoa a;
    a=ler(a);
    printf("\n");
    exibir(a);
}
