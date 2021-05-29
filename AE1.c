#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificacaoVoto(char opcao, int voto)
{
  if (opcao == 'p')
  {
    if ((voto == 11) || (voto == 44) || (voto == 22))
    {
      system("cls");
      printf("Voto para prefeito registrado com sucesso! \nObrigado ! Agora prossiga para votar no vereador \n");
      system("pause");
      return 1;
    }
    else
    {
      system("cls");
      printf("Voto inválido ! Por favor repita o procedimento ! \n");
      system("pause");
      return -1;
    }
  }
  if (opcao = 'v')
  {
    if ((voto == 111) || (voto == 222) || (voto == 333) || (voto == 444))
    {
      system("cls");
      printf("Voto para vereador registrado com sucesso! \nObrigado ! \n");
      system("pause");
      return 1;
    }
    else
    {
      system("cls");
      printf("Voto inválido ! Por favor repita o procedimento ! \n");
      system("pause");
      return -1;
    }
  }
}

int votacaoPrefeito()
{
  int votoPrefeito = 0;
  printf("Primeiro vote para prefeito conforme as opções abaixo: \n");
  printf("11 - Prefeito Dr. Zureta \n");
  printf("22 - Prefeito Senhor Gomes \n");
  printf("44 - Voto Nulo \n");
  fflush(stdin);
  scanf("%i", &votoPrefeito);
  system("cls");
  int validacaoPrefeito = verificacaoVoto('p', votoPrefeito);
  if (validacaoPrefeito == 1)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

int votacaoVereador()
{
  int votoVereador = 0;
  printf("Primeiro vote para vereador conforme as opções abaixo: \n");
  printf("111 - Vereador Joao do Frete \n");
  printf("222 - Vereador Maria da Pamonha \n");
  printf("333 - Vereador Ze da Farmacia \n");
  printf("444 - Voto Nulo \n");
  fflush(stdin);
  scanf("%i", &votoVereador);
  system("cls");
  int validacaoVereador = verificacaoVoto('v', votoVereador);
  if (validacaoVereador == 1)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

int main(int argc, char const *argv[])
{

  int opcaoPrograma = -1;
  int contagem = 0;

  do
  {
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("cls");
    printf("Seja bem vindo ao programa ! \n");
    printf("Para qual opção deseja prosseguir ? \n");
    printf("1 Votar \n");
    printf("2 Apuração dos Votos \n");
    printf("3 Sair \n");

    fflush(stdin);
    scanf("%i", &opcaoPrograma);

    switch (opcaoPrograma)
    {
    case 1:
    {
      system("cls");
      do
      {
        int votoPrefeito = votacaoPrefeito();
        if (votoPrefeito == 1)
        {
          system("cls");
          int votoVereador = votacaoVereador();
          if (votoVereador == 1)
          {
            system("cls");
            contagem += 1;
            opcaoPrograma = -1;
          }
          else
          {
            system("cls");
            opcaoPrograma = -1;
          }
        }
        else
        {
          system("cls");
          opcaoPrograma = -1;
        }

      } while (opcaoPrograma == 1);
      break;
    }
    case 2:
    {
      system("cls");
      printf("A contagem total de votos é: %i \n", contagem);
      printf("Obrigado por utilizar o sistema! \n");
      system("pause");
      opcaoPrograma = -1;
      break;
    }
    case 3:
    {
      printf("Obrigado por utilizar o sistema ! \n ");
      system("pause");
      return 0;
      break;
    }
    }
  } while (opcaoPrograma);
}
