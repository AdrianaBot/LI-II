//MOOshak (até 2/4/2022)
//Exercício E.

//Programa que dá o tamanho da maior subsequência que seja palíndromo.

#include <stdio.h>
#include <string.h>

int main () {
    char frase[10000] = ""; 
    int x = scanf("%s", frase);
    if (x!= 1) {
        return 1;
    }
    int counter; 
    unsigned int direita;
    int max = 1; 
    for (unsigned int i = 0; i < strlen(frase); i++) {
        direita = strlen(frase) - 1;
        counter = 0;
        for (unsigned int j = i; j <= direita;) { 
            if (j == direita) {
                counter++;
                break;
            } 
            else if (frase[j] == frase[direita]) {
                counter += 2; 
                direita--;
                j++;
            }
            else {
                counter = 0; 
                if (j == i) {
                    direita--;
                }
                else j = i;
            }
        }
        if (counter > max) {
            max = counter; 
        }
    }
    printf("%d\n", max);
    return 0;
}

