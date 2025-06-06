#include <stdio.h>

//função potencia, recebe a base e o expoente como parâmetros.
int potencia(int b, int e) {
    // variavel que armazena o resultado, recebe o valor 1 para esse método.
    int resultado = 1;

    //o contador recebe o expoente e multiplica a base por ela mesmo n vezes.
    for (int i = 0; i < e; i++) {
        // faz o produto
        resultado *= b;
    }

    //devolve o resultado
    return resultado;
}

//função main
int main() {
    // nossas variavéis de base e expoente;
    int base;
    int expoente;

    // pede as variavéis ao usuário.
    scanf("%d%d",&base,&expoente);

    //exibe na tela.
    printf("%d^%d = %d\n", base, expoente, potencia(base, expoente));

    return 0;
}
