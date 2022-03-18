/*MOOshak (até 5/3/2022)
2.*/

#include <stdio.h> 
#include <math.h> 

int main()
{
    int b,h,r; 
    int x = scanf ("%d %d %d", &b,&h,&r);
    int v = ((3.14 * h)/3) * (b * b + b * r + r * r);
    if (x!=3)
        return 1;
    printf("%d\n",v); 
        return 0;
}

/*V = (pi * h)/3 * (b^2 + b * r + r^2)

h -> altura 
b -> raio da base maior 
r -> raio da base menor*/


