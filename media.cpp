#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <iomanip> 

int main ()

{	
	setlocale(LC_ALL,"portuguese");
	int nralunos;
	printf("Quantos alunos você deseja lançar as notas. Max 5 \n");
	scanf("%d",&nralunos);
	system("clear");
	
	
	float p1[nralunos];
	float p2[nralunos];
	float trab1[nralunos];
	float trab2[nralunos];
	float media[nralunos];
	float mediageral;
	float pi[nralunos];
	char nome[nralunos][10];
	int i;
	int opcao;
	
	
	
	
	do
	{
		
		printf("=================\n");
		printf("	Menu de Opções	 \n");
		printf("=================\n");
		printf("1- Lançar alunos \n");
		printf("2- Lançar notas \n");
		printf("3- Consultar media geral da turma \n");
		printf("4- Consultar boletim de um aluno \n");
		printf("5- Consultar boletim de todos os alunos  \n");
		printf("6- sair \n");
		printf(" escolha a opcao\n");
		scanf("%d",&opcao);
		system("clear");
		
		if (opcao==1)
		{
			system("clear");
			for (i=1; i<=nralunos;i++)
			{
				printf("================================================================\n");
				printf("                        Lançar alunos             \n");
				printf("================================================================\n");
				printf("digite o nome do aluno %d \n",i);
				scanf("%s",nome[i]);
				system("pause");
				system("clear");
			}
		}
			else
			{
				if(opcao==2)
				{
					system("clear");
					for (i=1; i<=nralunos;i++)
					{
					printf("===================\n");
					printf("     Lan�ar Notas	   \n");
					printf("===================\n");
					printf (" digite a p1 do(a) %s \n",nome[i]);
					scanf ("%f", &p1[i]);
					printf("digite a p2 do(a) %s \n",nome[i]);
					scanf("%f", &p2[i]);
					printf (" digite a trab1 do(a) %s \n",nome[i]);
					scanf ("%f", &trab1[i]);
					printf("digite a trab2 do(a) %s \n",nome[i]);
					scanf("%f", &trab2[i]);
					printf("digite a pi do(a) %s \n",nome[i]);
					scanf("%f", &pi[i]);
					system("clear");
					media[i]= ((p1[i] * 0.15) + (p2[i] * 0.15) + (trab1[i] * 0.10) + (trab2[i] * 0.10) + (pi[i] * 0.5));
					printf("%.2f", media[i]);
					}
				}
			
				else
				{
					if(opcao==3)
					{
						system("clear");
						printf("===================\n");
						printf("     A média geral dos alunos	   \n");
						printf("===================\n");
						for	(i=1; i<=nralunos;i++)
								{
									mediageral += media[i]; 
								}
						mediageral = mediageral / nralunos;	

						printf("%.2f\n\n", mediageral);
					}
				
						else
						{
							if(opcao==4)
							{
								system("clear");
								for	(i=1; i<=nralunos;i++)
								{
									printf("===================\n");
									printf("     Boletim de um aluno	   \n");
									printf("===================\n");
								}
							}
								else
								{
									if(opcao==5)
									{
										system("clear");
										for	(i=1; i<=nralunos;i++)
										{
											printf("===================\n");
											printf("     Boletim de Todos os alunos	   \n");
											printf("===================\n");	
										}
									}
								}
						}
				}
			}
	}
	while(opcao !=6);
}

