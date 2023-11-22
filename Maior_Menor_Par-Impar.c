#include <stdio.h>

int main()
{
    int v[15],i,menor,maior,qti,qtp;
    printf("digite 15 valores: \n");
    for(i=0;i<15;i++){
        scanf("%d", &v[i]);
        if(v[i]%2==0){
            qtp++;
        }
        if(v[i]%2!=0){
            qti++;
        }
    }
    maior=v[0];
    for(i=0;i<15;i++){
        if(v[i]>maior){
            maior=v[i];
        }
    }
    menor=v[0];
    for(i=0;i<15;i++){
        if(v[i]<menor){
            menor=v[i];
        }
    }
    printf("menor %d | maior %d | quantidade de impar %d | quantidade de pares %d",menor,maior,qti,qtp);
    
    return 0;
}

