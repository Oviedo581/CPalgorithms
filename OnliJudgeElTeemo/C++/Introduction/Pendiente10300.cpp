// 10300
// https://onlinejudge.org/external/103/10300.pdf

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int casos,agricultores,i,tamano,animales,valor;
    long long int var,prima;
    scanf("%i",&casos);
    while(casos--){
        scanf("%i",&agricultores);
        prima=0;
        for(i=0;i<agricultores;i++){
            scanf("%i %i %i",&tamano,&animales,&valor);
            var=(tamano*valor);
            prima+=var;
        }
        printf("%lld\n",prima);
    }
    return 0;
}