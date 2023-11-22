#include <stdio.h>

int main()
{
    int v[15],i,x,y;
    float m;
    printf("digite 15 valores: \n");
    for(i=0;i<15;i++){
        scanf("%d", &v[i]);
    }
    printf("digite um valor positivo para x e outra para y:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    m=((v[x]+v[y])/2);
    printf("A media de x e y: %f",m);
    
    return 0;
}
