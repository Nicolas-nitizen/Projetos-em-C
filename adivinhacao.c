#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() { 

    // Cabecalho do Jogo
    printf("\n\n");
    printf("         P  /_\\  P                              \n"); 
    printf("        /_\\_|_|_/_\\                            \n");
    printf("    n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("    |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |" "  |  |_|  |"  " |                        \n");
    printf("    |_____| ' _ ' |_____|                        \n");
    printf("         \\__|_|__/                              \n");
    printf("\n\n");


    srand(time(NULL));

    int numerosecreto = 1 + rand() % 100;            // %d é uma mascara de variavel usada para mostra-la. 
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n ");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch (nivel){
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default:
            numerodetentativas = 6;
            break;        
    }

    if(nivel == 1){
        numerodetentativas = 20;
    }
    else if(nivel == 2){
        numerodetentativas = 15;
    }
    else{
        numerodetentativas = 6;
    }

    for(int i = 1; i <= numerodetentativas; i++) {    // Da a condição para while entender que é sempre verdadeiro!
    
        printf("Tentativa %d\n", tentativas);
        printf("Tente adivinhar o valor que estou pensando: ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Voce nao pode digitar numeros negativos\n");
            continue;
        }

        int acertou = chute == numerosecreto;
        int menor = chute < numerosecreto;
        
        if(acertou){
            break;
        }
        
        else if(menor){
            printf("O seu numero e menor do qual eu pensei!\n");
        
        }

        else{    
            printf("O seu numero e maior do qual eu pensei!...\n");
            
        }
        tentativas++;
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    printf("O JOGO ACABOU! INICIE-O NOVAMENTE!\n");

    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Voce acertou %d de tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Voce perdeu! Tente novamente.\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
    }
}

