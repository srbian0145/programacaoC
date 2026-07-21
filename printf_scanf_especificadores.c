#include <stdio.h>

/*NOTACOES:

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.

Uso de scanf ==> #include <stdio.h>
                    int main() {

                    int idade;
                    printf("Digite sua idade: \n");
                    scanf("%d", &idade);
                    printf("Sua idade é: %d\n", idade);
                    return 0;
                }*/
 
int main() {


    int idade = 000;
    float altura = 9.99;
    double saldoBancario = 9999999.99;
    char inicial = 'I';
    char nome[20] = "Individuo";

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancario: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
}

