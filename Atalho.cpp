#include <stdio.h> //Biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //Biblioteca responável por cuidas das string

int registro() //Função responável por cadastrar os usuários no sistema
{
	//Inicío criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //Responável por copiar os valores da string
	
	FILE *file; //Cria o arquivo 
	file = fopen(arquivo, "w"); //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //Salva o valor da variavel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file); //Responsável por fechar o arquivo
	
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a"); //Abertura do arquivo para escrever
	fprintf(file,nome);
	fclose(file); //Fechamento do arquivo
	
	file = fopen(arquivo, "a"); //Abertura do arquivo para escrever
	fprintf(file,",");
	fclose(file); //Fechamento do arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a"); //Abertura do arquivo para escrever
	fprintf(file,sobrenome);
	fclose(file); //Fechamento do arquivo
	
	file = fopen(arquivo, "a"); //Abertura do arquivo para escrever
	fprintf(file,",");
	fclose(file); //Fechamento do arquivo
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a"); //Abertura do arquivo para escrever
	fprintf(file,cargo);
	fclose(file); //Fechamento do arquivo
	
	system("pause");//Pause para o leitor ter tempo de ler
		
	
}
int consulta() //Função para consultar o usuário


{
	setlocale(LC_ALL, "Portuguese");//Sett para português
	
	//Inicío criação de variáveis/string
	
	char cpf[40]; 
	char conteudo[200];
	
	//final da criação de variáveis/string
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	 
	FILE *file;
	file = fopen(cpf,"r"); //Abertura de leitura do arquivo
	
	if(file == NULL) //(if)="Se não" (NULL) "Nulo)
	{
	printf("Não foi possivel abrir o arquivo, não foi localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL);
	{
	printf("\nEssas são as informações do usuário");
	printf("%s", conteudo);
	printf("\n\n");	//Pulando linhas...
	}
	
	system("pause"); //Pause para o leitor ter tempo de ler

	
}


int deletar() //Função para deletar o usuário


{
	//Inicío criação de variáveis/string
	
	char cpf[40];
	
	//final da criação de variáveis/string
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
    file = fopen(cpf, "r");//Função para abrir o arquivo/ler
    
    
    if(file == NULL);
    {
    printf("O usuário não se encontra no sistema.\n");
    system("pause");
	
	
	}
	

}




int main()
{
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;) //Loop/Repetições
	{
	
	system("cls"); //Limpando a tela
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem



	printf("### Cartório da EBAC ###\n"); //início do menu

	printf("Esclha a opção desejada do menu:\n\n");

	printf("\t1 - Registrar nomes \n");

	printf("\t2 - Consultar nomes \n");

	printf("\t3 - Deletar nomes \n\n"); //Fim do menu
	
	printf("Opção:");

	
	scanf("%d", &opcao); //Armazenando a escolha do usuário
	
	system("cls"); //Responsavel por limpar a tela
	
	switch(opcao)
	{ //Inicío da seleção


	case 1:
	registro(); //Chamada de funções
	break;
	
		
	case 2:
	consulta(); 
	break;
	
				
	case 3:
	deletar();
	break;
	
			
	default:
	printf("Essa opção não está dísponivel!\n");
	system("pause");
	break;
		
		
	} //Fim da seleção
	
	

	

	 
	
	
	
	
	
}
}
