#include <stdio.h> //Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //Biblioteca respon�vel por cuidas das string

int registro() //Fun��o respon�vel por cadastrar os usu�rios no sistema
{
	//Inic�o cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //Respon�vel por copiar os valores da string
	
	FILE *file; //Cria o arquivo 
	file = fopen(arquivo, "w"); //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //Salva o valor da variavel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file); //Respons�vel por fechar o arquivo
	
	
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
int consulta() //Fun��o para consultar o usu�rio


{
	setlocale(LC_ALL, "Portuguese");//Sett para portugu�s
	
	//Inic�o cria��o de vari�veis/string
	
	char cpf[40]; 
	char conteudo[200];
	
	//final da cria��o de vari�veis/string
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	 
	FILE *file;
	file = fopen(cpf,"r"); //Abertura de leitura do arquivo
	
	if(file == NULL) //(if)="Se n�o" (NULL) "Nulo)
	{
	printf("N�o foi possivel abrir o arquivo, n�o foi localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL);
	{
	printf("\nEssas s�o as informa��es do usu�rio");
	printf("%s", conteudo);
	printf("\n\n");	//Pulando linhas...
	}
	
	system("pause"); //Pause para o leitor ter tempo de ler

	
}


int deletar() //Fun��o para deletar o usu�rio


{
	//Inic�o cria��o de vari�veis/string
	
	char cpf[40];
	
	//final da cria��o de vari�veis/string
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
    file = fopen(cpf, "r");//Fun��o para abrir o arquivo/ler
    
    
    if(file == NULL);
    {
    printf("O usu�rio n�o se encontra no sistema.\n");
    system("pause");
	
	
	}
	

}




int main()
{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;) //Loop/Repeti��es
	{
	
	system("cls"); //Limpando a tela
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem



	printf("### Cart�rio da EBAC ###\n"); //in�cio do menu

	printf("Esclha a op��o desejada do menu:\n\n");

	printf("\t1 - Registrar nomes \n");

	printf("\t2 - Consultar nomes \n");

	printf("\t3 - Deletar nomes \n\n"); //Fim do menu
	
	printf("Op��o:");

	
	scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	
	system("cls"); //Responsavel por limpar a tela
	
	switch(opcao)
	{ //Inic�o da sele��o


	case 1:
	registro(); //Chamada de fun��es
	break;
	
		
	case 2:
	consulta(); 
	break;
	
				
	case 3:
	deletar();
	break;
	
			
	default:
	printf("Essa op��o n�o est� d�sponivel!\n");
	system("pause");
	break;
		
		
	} //Fim da sele��o
	
	

	

	 
	
	
	
	
	
}
}
