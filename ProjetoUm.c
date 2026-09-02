#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções para organizar o código
void mostrarSobreMim();
void mostrarProjetos();
void mostrarHabilidades();
void mostrarContato();

int main() {
    int opcao = 0;

    // O loop 'do-while' garante que o menu apareça pelo menos uma vez
    do {
        printf("\n========================================\n");
        printf("       PORTFOLIO INTERATIVO EM C        \n");
        printf("========================================\n");
        printf("1. Sobre Mim\n");
        printf("2. Projetos\n");
        printf("3. Habilidades\n");
        printf("4. Contato\n");
        printf("5. Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");

        // Lê a escolha do usuário
        scanf("%d", &opcao);

        printf("\n"); // Quebra de linha para organização visual

        // A estrutura 'switch' direciona para a função correta
        switch(opcao) {
            case 1:
                mostrarSobreMim();
                break;
            case 2:
                mostrarProjetos();
                break;
            case 3:
                mostrarHabilidades();
                break;
            case 4:
                mostrarContato();
                break;
            case 5:
                printf("Saindo... Obrigado pela visita!\n");
                break;
            default:
                printf("Opcao invalida. Por favor, tente novamente.\n");
        }
    } while(opcao != 5); // Continua até o usuário digitar 5

    return 0;
}

// Abaixo estão as implementações das funções
void mostrarSobreMim() {
    printf("--- SOBRE MIM ---\n");
    printf("Ola! Meu nome e Johann.\n");
    printf("Tenho 19 anos e sou estudante de Ciencia da Computacao.\n");
    printf("Sou apaixonado por tecnologia, desenvolvimento de software e design de interfaces.\n");
}

void mostrarProjetos() {
    printf("--- MEUS PROJETOS ---\n");
    printf("1. Randomizador de Filmes (Python/Streamlit): Aplicacao para sorteio de filmes.\n");
    printf("2. Clone de Interface (Figma): Estudo de UI/UX de plataforma de streaming.\n");
    printf("3. Automacao de Processos (n8n): Fluxos de trabalho para otimizacao de rotinas.\n");
}

void mostrarHabilidades() {
    printf("--- HABILIDADES TECNICAS ---\n");
    printf("- Linguagens: C, Java, Python\n");
    printf("- Design e UI/UX: Figma\n");
    printf("- Ferramentas: Google AI Studio, Git\n");
}

void mostrarContato() {
    printf("--- CONTATO ---\n");
    printf("Email: johann@email.com\n");
    printf("GitHub: github.com/johann\n");
    printf("LinkedIn: linkedin.com/in/johann\n");
}