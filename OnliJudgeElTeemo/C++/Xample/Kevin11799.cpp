// 11799
// https://onlinejudge.org/external/117/11799.pdf

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    
    int casos, i, monstruos, j, velocidad, minimo;

    scanf("%i",&casos);

    for ( i = 1 ; i < casos+1 ; i++ ){

        scanf("%i",&monstruos);

        minimo = 0;

        for (j = 0 ; j < monstruos ; j++){

            scanf("%i",&velocidad);

            if (velocidad > minimo){

                minimo = velocidad;

            }

        }

        printf("Case %i: %i\n", i, minimo);

    }

    return 0;

}