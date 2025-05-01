// Código em C para listar números primos em um intervalo fornecido pelo usuário
// Autor: [Maycon Soares Maia]
// Doscente: [Dr. Kennedy Reurison Lopes]
// Data: [01/05/2025]
/* Observação:
Certifique-se de estar no diretório correto ao executar o comando 
no terminal. Use o comando cd para navegar até o diretório do arquivo antes de compilar:*/
// Compilação: gcc -o numeros_primos numeros_primos.c
// Execução: ./numeros_primos
// Observação: O programa considera que o intervalo é fechado, ou seja, inclui os limites.
// Exemplo de uso: Se o usuário digitar 10 e 20, o programa imprimirá os números primos entre 10 e 20.
// Exemplo de saída: Números primos entre 10 e 20: 11 13 17 19

// biblioteca stdbool.h para uso de booleanos além de stdio.h para entrada e saída
#include <stdio.h>
#include <stdbool.h>


// Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n < 2) return false;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int inicio, fim;

    // Entrada dos números
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);

    // Garante que inicio seja menor ou igual a fim
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    // Listar números primos
    printf("Números primos entre %d e %d:\n", inicio, fim);
    int i;
    for (i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
