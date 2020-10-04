#include <stdio.h>
#include <stdlib.h>

struct tp_endereco{ //definição do TIPO de data

    char rua[40], bairro[40], cidade[40], estado[2];
    int cep;
    int numero;
};

struct tp_data_nascimento{
    int dia, mes, ano;
};

struct cadastro_cliente{
    char nome_cliente[40];
    int telefone, cpf;

    struct tp_endereco endereco; //criação de variável tipo 'struct tp_endereco'
    struct tp_data_nascimento data_nascimento;
    
} cad_cliente[2];

int main(void){
    int i;

    printf("\n\n--------------Cadastro de Clientes--------------\n\n");
    
    //Armazenando os dados do cadat=stro dentro da struct 'cad_cliente'
    for(i = 1; i < 3; i++){

        //COLETA DE DADOS DE CLIENTE
        printf("Cadastro Cliente %d", i);

        printf("\nNome do cliente.....: ");
        fflush(stdin); //limpa o buffer do teclado
        gets(cad_cliente[i].nome_cliente); //Nome da struct '.' variavel interna a ser lida
    
        printf("\nCPF do cliente.....: ");
        scanf("%d", &cad_cliente[i].cpf);

        printf("\nTelefone.....: ");
        scanf("%d", &cad_cliente[i].telefone); //Nome da struct '.' variavel interna a ser lida

        printf("\nCEP.....: ");
        fflush(stdin); 
        scanf("%d", &cad_cliente[i].endereco.cep); //Nome da struct interna

        printf("\nRua.....: ");
        fflush(stdin); 
        gets(cad_cliente[i].endereco.rua);

        printf("\nNumero.....: ");
        fflush(stdin); 
        scanf("%d", &cad_cliente[i].endereco.numero); 

        printf("\nBairro.....: ");
        fflush(stdin); 
        gets(cad_cliente[i].endereco.bairro); 

        printf("\nCidade.....: ");
        fflush(stdin); 
        gets(cad_cliente[i].endereco.cidade);

        printf("\nEstado.....: ");
        fflush(stdin); //limpa o buffer do teclado
        gets(cad_cliente[i].endereco.estado); //Nome da struct interna 


        //COLETA DE DADOS DATA DE NASCIMENTO

        
        printf("\nDia de nascimento.....");
        scanf("%d", &cad_cliente[i].data_nascimento.dia);

        printf("\nMes de nascimento.....");
        scanf("%d", &cad_cliente[i].data_nascimento.mes);

        printf("\nAno de nascimento.....");
        scanf("%d", &cad_cliente[i].data_nascimento.ano); 

        printf("\n\n====================================\n\n");
    } //FIM DA COLETA

    //LOOP PARA MOSTRAR OS DADOS
    for(i = 1; i < 3; i++){

        printf("\nCliente %d\n", i);
        printf("\n=================================\n");
        printf("\nNome.....: %s", cad_cliente[i].nome_cliente);
        printf("\nCPF.....: %d", cad_cliente[i].cpf);
        printf("\nTelefone.....: %d", cad_cliente[i].telefone);
        printf("\nCEP.....: %d", cad_cliente[i].endereco.cep);
        printf("\nRua.....: %s", cad_cliente[i].endereco.rua);
        printf("\nNumero.....: %d", cad_cliente[i].endereco.numero);
        printf("\nBairro.....: %s", cad_cliente[i].endereco.bairro);
        printf("\nCidade.....: %s", cad_cliente[i].endereco.cidade);
        printf("\nEstado.....: %s", cad_cliente[i].endereco.estado);

        printf("\nData de nascimento.....: %d/%d/%d", cad_cliente[i].data_nascimento.dia, cad_cliente[i].data_nascimento.mes, cad_cliente[i].data_nascimento.ano);
    }

    return 0;
}
