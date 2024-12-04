struct struct_ender{
    char rua[30];
    int num;
    char bairro[30];
    char cidade[30];
};

struct struct_pessoa{
    char nome[30];
    int idade;
    struct struct_ender ender_resid;
    struct struct_ender ender_comer;
};

struct struct_pessoa ler(struct struct_pessoa pessoa){
    printf("Digite o nome da pessa: ");
    gets(pessoa.nome);
    setbuf(stdin,NULL);
    printf("Digite a idade: ");
    scanf("%i",&pessoa.idade);
    setbuf(stdin,NULL);
    printf("\nPreenchendo o endereco comercial\n");
    printf("Digire o nome da rua: ");
    gets(pessoa.ender_comer.rua);
    setbuf(stdin,NULL);
    printf("Digire o numero: ");
    scanf("%i",&pessoa.ender_comer.num);
    setbuf(stdin,NULL);
    printf("Digire o bairro: ");
    gets(pessoa.ender_comer.bairro);
    setbuf(stdin,NULL);
    printf("Digire a cidade: ");
    gets(pessoa.ender_comer.cidade);
    setbuf(stdin,NULL);
    printf("\nPreenchendo o endereco residencial\n");
    printf("Digire o nome da rua: ");
    gets(pessoa.ender_resid.rua);
    setbuf(stdin,NULL);
    printf("Digire o numero: ");
    scanf("%i",&pessoa.ender_resid.num);
    setbuf(stdin,NULL);
    printf("Digire o bairro: ");
    gets(pessoa.ender_resid.bairro);
    setbuf(stdin,NULL);
    printf("Digire a cidade: ");
    gets(pessoa.ender_resid.cidade);
    setbuf(stdin,NULL);
    return pessoa;

}

void exibir(struct struct_pessoa pessoa){
    printf("Nome: %s\n",pessoa.nome);
    printf("Idade: %i\n",pessoa.idade);
    printf("Endereco comercial\n");
    printf("Rua: %s\n",pessoa.ender_comer.rua);
    printf("Numero: %i\n",pessoa.ender_comer.num);
    printf("Bairro: %s\n",pessoa.ender_comer.bairro);
    printf("Cidade: %s\n",pessoa.ender_comer.cidade);
    printf("Endereco residencial\n");
    printf("Rua: %s\n",pessoa.ender_resid.rua);
    printf("Numero: %i\n",pessoa.ender_resid.num);
    printf("Bairro: %s\n",pessoa.ender_resid.bairro);
    printf("Cidade: %s\n",pessoa.ender_resid.cidade);
}
