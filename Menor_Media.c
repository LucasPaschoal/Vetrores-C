#include <stdio.h>
int main ()
{
    int v[15],i,soma=0;
    float m;
    for(i=0;i<15;i++){
        printf("Digite valores para um vetor de 15 posicoes");
        scanf("%d",&v[i]);
        soma=soma+v[i];
    }
    m=soma/15;
    printf("Esses são todos os valores do vetor menores que a média");
    for(i=0;i<15;i++){
        if(v[i]>m)printf("%d",v[i]);
    }
}