/*este código checa a a existência de números primos num intervalo determinado pelo usuário
utuilizando o tipo boll.

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/
#include <stdio.h>
//biblioteca usada para utilizar operadores lógicos em C.
#include <stdbool.h>


bool ehPrimo(int n) {
    // se ele for igual ou menor que 1 ele não será primo. 
    if (n <= 1) return false;
    /*esse for eu descobri recentemente atravéz de estudos,
    Básicamente ele vai iniciar com o contador em 2 e seu
    teste de condição ira seguir enquanto a multiplicação
    do contador for inferior ou igual ao número que está
    sendo testado no momento, pois se existepelo menos
    algum número que pode dividir aquele determinado 
    número de forma inteira, pe devera ser igual ou 
    inferior a sua raiz quadrada, achei mt eficiente.*/
    for (int i = 2; i * i <= n; i++) {
       //faz a checagem de divisão inteira.
        if (n % i == 0)
            return false;
    }
    //retorna falso caso o contrario não seja retornado antes.
    return true;
}

int main() {
    //variaveis do intervalo
    int inicio, fim;

    //interface de interação com o usuário 
    printf("Digite o número inicial: ");
    scanf("%d", &inicio);
    printf("Digite o número final: ");
    scanf("%d", &fim);

    printf("Números primos entre %d e %d:\n", inicio, fim);

    //exibição 
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    //fim do codigo
    return 0;
}
