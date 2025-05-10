#include <stdio.h>

// criando logica para função recursiva para movimento da peça TORRE
void funcaotorre(int casas)
{
    if (casas >= 1)
    {
        printf("Direita\n");
        funcaotorre(casas - 1);
    }
}

// criando logica para função recursiva e loops aninhados, para movimento da peça BISPO
void funcaobispo(int casas)
{
    for (int i = 1; i <= casas; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("Cima, ");
        }
        printf("Direita\n");
        funcaobispo(casas - 1);
        break;
    }
}

// criando logica para função recursiva para movimento da peça RAINHA
void funcaorainha(int casas)
{
    if (casas >= 1)
    {
        printf("Esquerda\n");
        funcaorainha(casas - 1);
    }
}

// criando logica para função recursiva para movimento da peça TORRE
// incluindo loops complexos
void funcaocavalo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        funcaocavalo(casas - 1);
    }
}

int main()
{

    // variavel opcao adicionada, para entrada de dados do usuario
    int opcao;
    int movimento;

    // estrutura de repetição While, para repetição da lógica do jogo
    while (opcao != 5)
    {

        // menu interativo para usuario escolher peças de xadrez
        printf("        PEÇAS XADREZ\n");
        printf("escolha uma peça para movimentar:\n");
        printf("1. TORRE\n");
        printf("2. BISPO\n");
        printf("3. RAINHA\n");
        printf("4. CAVALO\n");
        printf("5. para sair\n");
        scanf("%d", &opcao);

        // estrutura de controle condicional usada para menu interativo
        // logica de cada peça de xadrez
        switch (opcao)
        {
        case 1:
            // chamando função recursiva para movimento da peça TORRE
            funcaotorre(5);
            break;
        case 2:
            // chamando função recursiva para movimento da peça BISPO
            // incluindo função de loops aninhados
            funcaobispo(5);
            break;
        case 3:
            // chamando função recursiva para movimento da peça RAINHA
            funcaorainha(8);
            break;
        case 4:
            // chamando função recursiva para movimento da peça CAVALO
            // incluindo função de loops aninhados complexos
            funcaocavalo(1);
            break;
        case 5:
            // encerrando programa
            printf("Encerrando sessão...");
            break;

        default:
            // opção informada incorreta, informe a opção correta
            printf("Opção inválida, tente novamente..\n");
            break;
        }
    }

    return 0;
}