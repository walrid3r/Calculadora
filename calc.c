#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Erro: divisão por zero!\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Operador inválido!\n");
            return 1; // Encerra o programa com código de erro
    }

    printf("Resultado: %.2lf\n", result);

    return 0; // Encerra o programa sem erros
}