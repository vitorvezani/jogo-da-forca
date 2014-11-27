// teste.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>  

char str2[25]; // vetor das palavras erradas usado como variavel global pois eh usado no cliente e server

void leia_erradas(char str2[]) //cliente LER LETRAS ERRADAS
{
FILE *arq;
int i = 0;
arq=fopen("erradas.arq","r");
while (!feof(arq))
{
str2[i]= getc(arq); // vetor de palavras erradas
i++;
}
str2[i]= '\0';
fclose(arq);
}
                                                                 //Server
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void criar_erradas() //servidor criar aquivo erradas.arq
{
    FILE *arq;
    arq=fopen("erradas.arq","w");
    fclose(arq);
}

void escreva_palavra(char linha[]) //servidor ESCREVE PALAVRA ESCOLHIDA NO ARQUIVO 
{
FILE *arq;
int i = 0;
arq = fopen ("palavra.arq","w");
   while (linha[i]!='\0')
     {
         putc(linha[i],arq);
         i++;
     }
fclose(arq);
}

int leia_letra() //servidor LE A LETRA ESCRITA PELO CLIENTE
{
     FILE *arq;
     arq = fopen("letra.arq","r");
     return getc(arq);
     fclose(arq);
}

void escreva_erradas(char c) //servidor ESCREVE CHAR ERRADO NO ARQUIVO
{
    FILE *arq;
    arq=fopen("erradas.arq","a");
    putc(c,arq);
    putc(' ',arq);
    fclose(arq);
}

void interface(int forca,char linha[],char str2[])
{ 
     system("cls");
     printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
     printf ("%c                      %c\n",186,179);
  
     switch (forca)
            {
                 case 0:
                 printf ("%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n",186,186,186,186,186,186,186,186,186,186,186,186);
                 break;
                 case 1:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c      %c\n",186,179,179); //1 linha cabeca
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo  
                          printf ("%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n",186,186,186,186,186,186,186,186,186,186,186,186);
                          break;  
                 case 2:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c      %c\n",186,179,179); //1 linha cabeca
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          break;
                 case 3:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c      %c\n",186,179,179); //1 linha cabeca
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,186);//braco esquerdo
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          break;
                  case 4:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c      %c\n",186,179,179); //1 linha cabeca
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          break;
                  case 5:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c      %c\n",186,179,179); //1 linha cabeca
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,186);//braco esquerdo
                          break;
                  case 6:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c      %c\n",186,179,179); //1 linha cabeca
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          break;
                  case 7:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c %c    %c\n",186,179,94,179); //1 linha cabeca e olho esquerdo
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          break;
                  case 8:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c %c  %c %c\n",186,179,94,94,179); //1 linha cabeca e olhos
                          printf ("%c                  %c      %c\n",186,179,179);//2 linha cabeca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          break;
                  case 9:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c %c  %c %c\n",186,179,94,94,179); //1 linha cabeca e olhos
                          printf ("%c                  %c  %c   %c\n",186,179,60,179);//2 linha cabeca e nariz
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          break;
                  case 10:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c %c  %c %c\n",186,179,94,94,179); //1 linha cabeca e olhos
                          printf ("%c                  %c  %c   %c\n",186,179,60,179);//2 linha cabeca e nariz
                          printf ("%c                  %c %c%c%c/ %c\n",186,179,92,95,95,179); //boca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          break;
                  case 11:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c %c  %c %c\n",186,179,94,94,179); //1 linha cabeca e olhos
                          printf ("%c                 d%c  %c   %c\n",186,179,60,179);//2 linha cabeca nariz e orelha
                          printf ("%c                  %c %c%c%c/ %c\n",186,179,92,95,95,179); //boca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          break;
                  case 12:
                          printf ("%c                  %c%c%c%c%c%c%c%c\n",186,176,176,176,176,176,176,176,176); //cabelo
                          printf ("%c                  %c %c  %c %c\n",186,179,158,158,179); //1 linha cabeca e olhos
                          printf ("%c                 d%c  %c   %cb\n",186,179,60,179);//2 linha cabeca nariz e orelha
                          printf ("%c                  %c %c%c_  %c\n",186,179,95,95,179); //boca
                          printf ("%c                   %c%c%c%c%c%c\n",186,92,95,95,95,95,47);//queixo      
                          printf ("%c                      %c\n",186,186);//pescoço
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,174,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,175);//braco direito
                          printf ("%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n%c                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186);//corpo
                          printf ("%c             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,217,95,95,95,95,95,95,95,95,186,95,95,95,95,95,95,95,95,192);//braco direito
                          printf ("Voce Perdeu (loser)\n");
                          system ("pause");
                          exit(1);
                          break;

                  } 
      printf ("%c\n%c\n%c",186,186,186);

      printf ("%s              Letras erradas:%s",linha,str2);
      printf ("\n\n");
}

void server()                                                                         //Server Principal
{
     int forca=0;
     char palavra[25],linha[25],letra;
     char palavras1 [25][10]={"zumbi","carro","terra","uva","bolsa","mouse","fumo","local","jogos","peixe","tranca","amor","amigo","bola","videos","fotos","posto","prova","guia","dota","aluno","pucc"};
     char palavras2 [25][15]={"progresso","computador","algoritmo","plantacao","fazendo","facebook","whiske","cerveja","absinto","laboratorio","abercrombie","billabong","colheita","arborista","arborista","arborista"};
     char palavras3 [35][20]={"ferramentas","laboratorio","infravermelho","refrigerante","possibilidades","dedicatoria","imobiliaria","inseguranca","negligencia","necessidade","pirocoptero","procrastinacao","cerebrastenico","desamamentacao","suicidomaniaco","centrimetragem","neurocirurgiao","perfeccionismo","extraordinario"};             
     srand(time(0));
     int x=rand()%10;
     int n=0;
          printf ("                      Bem Vindo Ao Server\n\n");
     printf ("               Escolha uma Classe de palavras.\n\n");
     printf ("1 - 0~5 letras.\n2 - 6~10 letras.\n3 - 11~15 letras.\n\n");
     scanf ("%d",&n); 

	 switch (n)
           {
                  case 1:
                           strcpy(palavra,palavras1[x]);
                           break;
                  case 2:
                           strcpy(palavra,palavras2[x]);
                           break;
                  case 3:
                           strcpy(palavra,palavras3[x]);
                           break;
                  default:
                           printf("Classe Invalida");
           }

	 	 		for (int i=0 ; i<25;i++) // limpa vetor
				{
						linha[i]=0;
				}
                           //Contar numero de letras da palavra e criar os pontinhos
                for (int i=0; i < strlen(palavra);i++)
                {
                         linha[i]='-';
                }
                          //
                                             
     interface(forca,linha,str2);
     
     escreva_palavra(linha);
     
     criar_erradas();

     printf ("Esperando jogada do cliente...\n");
     
     system ("pause");
     
     for (int i=0; i <50 ; i++) //loop principal
     { 
         letra = leia_letra();
         int aux=0;
         
                for (int j=0 ; j<strlen(palavra) ; j++) //loop verificar letra no vetor
                {
                    if (letra == palavra[j]) //condicao verificar letra
                    linha[j] = letra;  
                    else
                    aux++;
                }
         if (aux != strlen(palavra))
         {
               leia_erradas(str2);
                  interface(forca,linha,str2); //se errar, atualizar e chamar vetor
               }
               if (aux == strlen(palavra))
               {
               escreva_erradas(letra);
               leia_erradas(str2);
               forca++;
               interface(forca,linha,str2); //se errar, atualizar e chamar vetor
         }
         
         if (strcmp(linha,palavra)==0)
         {
                     printf("   Voce Ganhou!Parabens\n");
                     system ("pause");
                     exit(1);
         }
          escreva_palavra(linha);              
          printf ("Esperando jogada do cliente...\n");
          system ("pause"); 
                         
      }
      
}
//                                                                                                   Cliente                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void leia_palavra(char linha[]) //cliente LER PALAVRA 
{
FILE *arq;
int i = 0;
arq=fopen("palavra.arq","r");
while (!feof(arq))
{
linha[i] = getc(arq);
i++;
}
linha[i]= '\0';
fclose(arq);
}

void escreva_letra(char letra) //cliente ESCREVE LETRA NO ARQUIVO
{
FILE *arq;
arq = fopen("letra.arq","w");
putc(letra,arq);
fclose(arq);
}

void cliente()     
{
     char letra,linha[25];
     
          printf ("                      Bem Vindo Ao Cliente\n\n");  
 
      for (int i=0;i<25;i++)
      {    
          system("cls");
          
          leia_palavra(linha); // LER PALAVREA ATUAL COM TRACOS
          leia_erradas(str2); // LER ERRADAS
          printf ("Palavra no momento :%s Palavras ja Erradas: %s\n",linha,str2);
          
          printf ("Escreva um caracter: ");
          getchar();
          scanf ("%c",&letra);
          
          escreva_letra(letra);
          
          printf ("Esperando jogada do servidor...\n");
          system ("pause");  
     }
     
}
int main()
{
	int n;
    
    printf ("       Ola,bem vindo ao jogo da forca\n       Voce deseja executar Client ou Servidor?\n\n");
    printf ("                         1-Server\n");
    printf ("                         2-Client\n");
    scanf ("%d",&n);
    system ("cls");
    if (n==1)
       server();
    else
        cliente();

     system ("pause");
	return 0;
}
