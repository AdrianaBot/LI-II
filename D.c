/*MOOshak (até 19/3/2022)
D.*/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

//Programa que, dados dois números inteiros entre 1 e 2^25, imprime o número total de números triangulares e de números primos, separados por um espaço


int crivoDeEratostenes(unsigned long min, unsigned long max){ 
    int count = 0;
    char *ePrimo; //char ocupa menos espaço na memória (char: uint8_t, int: uint32_t)
    ePrimo = (char*) calloc(max+1, sizeof(char)); //calloc inicializa uma estrutura na memória a 0 com o tamanho n (max + 1) * sizeof(char)

    for (unsigned long p = 2; p <= max; p++)
    {
        if (ePrimo[p] == 0)
        {
            if (p >= min) 
                count++;   
            for (unsigned long i = p * p; i<= max; i += p) {
                ePrimo[i] = 1;
            }
        }
    }
    return count;
}

//função para a fórmula resolvente
double quadratica (double a, double b, double c) {
    return (b*(-1) + sqrt (b * b - 4 * a * c)) / (2 * a);
}

//função para determinar se um número é triangular ou não, através da fórmula resolvente
int eTriangular (int t) {
   double n = quadratica(1,1, -2 * t);
   if (n == (int) n)
   return 1;
   else return 0; 
}

int contaTriangulares(int a, int b){
    int conta = 0;
    for (int n = a; n <= b; n++)
    {
        if (eTriangular(n))
        conta++;
    }
    return conta;
}

int main() {
    int fst, snd, triangulares, primos;
    int x = scanf("%d %d", &fst, &snd);
    if (x!=2)
        return 1;
    triangulares = contaTriangulares(fst,snd);
    primos = crivoDeEratostenes(fst,snd);
    printf("%d %d\n", triangulares, primos);
    return 0;
}


