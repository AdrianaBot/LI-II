//MOOshak (até 5/3/2022)
//Exercício A.

/*Programa que recebe dois números e devolve o quadrado do maior, caso sejam diferentes, ou a palavra IGUAIS, caso sejam iguais*/

#include <stdio.h>
int main()
{
    int a,b;
    int x = scanf ("%d %d", &a,&b);
    if (x != 2)
        return 1;
    if (a == b) {
        printf("IGUAIS\n");
        return 0;
    }
    if (a > b) {
        printf("%d\n",(a*a));
    }
    else {
        printf("%d\n",(b*b));
    }
        return 0; 
}
    
    
