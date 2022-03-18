/*MOOshak (até 12/3/2022)
C.*/

#include <stdio.h>

//Função auxiliar para determinar o fatorial
int fact(int n) {
    int r = 1;
    int i = 1;
    while (i <= 12) {
        r = r * i;
        i = i + 1;
        if (r==n)
            return 1;
    }
    return 0; 
}


int main()
{
    int a,b,c,smol=0,med=0,big=0;
    int x = scanf("%d %d %d", &a,&b,&c);
    if (x!=3)
        return 1;
    if (a>b && b>c) {
        big = a;
        med = b;
        smol = c;
    }
    if (a>c && c>b) {
        big = a;
        med = c;
        smol = b;
    }
    if (b>a && a>c) {
        big = b;
        med = a;
        smol = c;
    }
    if (b>c && c>a) {
        big = b;
        med = c;
        smol = a;
    }
    if (c>a && a>b) {
        big = c;
        med = a;
        smol = b;
    }
    if (c>b && b>a) {
        big = c;
        med = b;
        smol = a;
    }
    if (fact(big)) 
        printf("FATORIAL\n");
    
    else 
        printf("%d %d %d\n",smol,med,big);
        
    return 0;
}



