#include <stdio.h>

int main()
{
    int x,i,aux,v[15];
    printf("Digite 15 valores para um vetor");
    for(i=0;i<15;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<15;i++){
        for(x=0;x<15;x++){
            if(v[i]<v[x]){
                aux=v[i];
                v[i]=v[x];
                v[x]=aux;
            }
        }
    }
    printf("Colocando os valores em ordem crescente...\n");
    for(i=0;i<15;i++){
        printf("na posicão %d vai %d\n",i,v[i]);
    }
    return 0;
}
