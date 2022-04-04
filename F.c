//MOOshak (até 2/4/2022)
//Exercício F.

//Programa que, dada uma frequência e uma lista de produtos, organiza os produtos individualmente e por pares, caso apareçam em número igual ou maior à frequência dada, por ordem alfabética, e indica a quantidade de vezes que aparecem. Não há repetições.

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

void contaPares(char* string, int matriz[26][26]) {
    if (string[0] == '\n') {
        return;
    }
    int direita = 0;
    int esquerda = 0; 
    for (unsigned int i = 0; i <= strlen(string) - 1; i++) {
        esquerda = string[i] - 'A';
        matriz[esquerda][esquerda]++;
        for (unsigned int j = i + 1; j < strlen(string); j++) {
            direita = string[j] - 'A';
            if (esquerda > direita) {
                matriz[direita][esquerda]++;
            }
            if (direita > esquerda) {
                matriz[esquerda][direita]++;
            }
        }
    }
}

int intToAscii(int x) {
    return 'A'+x;
}

int main() {
    int F;
    int x = scanf("%d", &F);
    if (x!=1) {
        return 1;
    }
    int matriz[26][26] = {{0}};
    char string[10000] = "\n";
    while (fgets(string, 10000, stdin)) {
         contaPares(string, matriz); 
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (matriz[i][j] >= F) {
                if (i == j) {
                    printf("%c = %d\n", intToAscii(i), matriz[i][j]);
                }
                else printf("%c%c = %d\n", intToAscii(i), intToAscii(j), matriz[i][j]);
            }
        }
    }
    return 0;
}

