#include <iostream>
#include <locale.h>
#include <stdio.h>
main ()

{	
	setlocale(LC_ALL,"portuguese");
	int nralunos;
	printf("Quantos alunos você deseja lançar as notas. Máx 5 \n");
	scanf("%d",&nralunos);
	system("cls");
	
	
	float p1[nralunos];
	float p2[nralunos];
	float trab1[nralunos];
	float trab2[nralunos];
	float media[nralunos];
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
		system("cls");
		
		if (opcao==1)
		{
			system("cls");
			for (i=1; i<=nralunos;i++)
			{
				printf("================================================================\n");
				printf("                        Lançar alunos             \n");
				printf("================================================================\n");
				printf("digite o nome do aluno %d \n",i);
				scanf("%s",&nome[i]);
				system("pause");
				system("cls");
			}
			//for (i=1; i<=nralunos;i++)
			//{
				//printf("nome = %s \n",nome[i]);
				
			//}
			
		}
			else
			{
				if(opcao==2)
				{
					system("cls");
					for (i=1; i<=nralunos;i++)
					{
					printf("===================\n");
					printf("     Lançar Notas	   \n");
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
					system("cls");
					media[i]= ((p1[i] * 0.15) + (p2[i] * 0.15) + (trab1[i] * 0.10) + (trab2[i] * 0.10) + (pi[i] * 0.5));
					}
				}
			
				else
				{
					if(opcao==3)
					{
						system("cls");
						for (i=1; i<=nralunos;i++)
						{
							printf("===================\n");
							printf("     Media geral	   \n");
							printf("===================\n");
							printf ("a media dos alunos(a) %s é igual a %f",nome[i],media[i]);
							scanf("%f",&media[i]);
							media[i]= %.2f \n ",p1[i] * 0.15,p2[i] * 0.15,trab1[i] * 0.10,trab2[i] * 0.10,pi[i] * 0.50,media[i]);
							system("cls");
							
						}	
					}
				
						else
						{
							if(opcao==4)
							{
								system("cls");
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
										system("cls");
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

