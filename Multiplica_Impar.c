#include <stdio.h>

int main()
{
    int v[15],i;
    printf("Digite 15 valores\n");
    for(i=0;i<151;i++){
        scanf("%d",&v[i]);
    }
    printf("Valores pares: ");
    for(i=0;i<15;i++){
        if(v[i]%2==0){
            printf("%d ",v[i]);
        }
    }
    printf("\nMultiplicando os valores impares...\n");
    for(i=0;i<15;i++){
        if(v[i]%2!=0){
            v[i]=v[i]*2;
            printf("valor multiplicado: %d\n",v[i]);
        }
    }
  
}