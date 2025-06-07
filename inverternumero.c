/*esse código inverte uma sequência de números inteiros

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/

#include <stdio.h>

//A funçaõ inverterNumero pega o último dígito (num % 10) 
//e o adiciona ao número invertido multiplicado por 10.
int inverterNumero(int num) {
    int invertido = 0;
    
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    
    return invertido;
}

//função main
int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = inverterNumero(numero);
    printf("Número invertido: %d\n", resultado);

    return 0;
}
