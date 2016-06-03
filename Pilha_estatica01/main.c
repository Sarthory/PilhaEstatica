#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100

typedef struct pilha_estatica
{
    int topo;
    int item [MAX];
}PILHA;

void push (PILHA *estatica, int num) // Adicionar item na pilha
{
    if (estatica->topo < MAX-1)
    {
        estatica->item [ ++ (estatica->topo)] = num;
    }
}

int pop (PILHA *estatica) // Remover item da pilha
{
    return (estatica->item [(estatica->topo) -- ]);
}
/*
void clear (PILHA *estatica) // Limpar a pilha
{
    while (estatica)
}
*/
int menu()
{
    int op = 0;

    system("cls");

    printf("\n==============================\n");
    printf("======= PILHA ESTÁTICA =======\n");
    printf("==============================\n\n");
    printf("1. Inserir itens na pilha.\n");
    printf("2. Remover itens da pilha.\n");
    printf("3. Limpar a pilha.\n");
    printf("4. Exibir o primeiro item da pilha.\n");
    printf("5. Exibir todos os itens da pilha.\n\n");

    printf("9. <<< TERMINAR >>>\n\n");

    printf("Digite uma opção: ");
    scanf("%d", &op);

    return op;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct pilha_estatica estatica;
    int i, x;
    int opcao;
    estatica.topo = -1;

    do
    {
        opcao = menu();

        switch (opcao)
        {
            case 1:
                printf("\nDigite o número a ser inserido: ");
                scanf("%d", &x);
                push(&estatica, x);
                break;
            case 2:
                if (estatica.topo > -1)
                {
                    x = pop(&estatica);
                    printf("\nO item removido foi: %d\n\n", x);
                    system("pause");
                }
                else
                {
                    printf("\nA pilha está vazia!\n\n");
                    system("pause");
                }
                break;
            case 3:
                printf("\nLimpar a lista.\n");
                system("pause");
                break;



            case 9:
                printf("\n<<< TERMINAR PROGRAMA >>>\n");
                break;
            default:
                printf("\nEscolha uma opção válida!\n\n");
                system("pause");
                break;

        }
    }while (opcao != 9);

    return 0;
}




















