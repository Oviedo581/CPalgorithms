// 12750
// https://onlinejudge.org/external/127/12750.pdf

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int casos, n, partidos, i, j, secuencia, contador, juegos;
    bool ans;
    char resultados;
    scanf("%i", &casos);
    for(n=1; n<casos+1; n++){
        scanf("%i", &partidos);
        ans=true;
        secuencia=0;
        contador=0;
        for(i=0; i<partidos; i++){
            cin.ignore();
            scanf("%c", &resultados);
            contador+=1;
            if(resultados != 'W'){
                secuencia+=1;
            }
            else{
                secuencia=0;
            }
            if((secuencia == 3) && ans==true){
                juegos=contador;
                ans=false;
            }
        }
        if(ans== false){
            printf("Case %i: %i\n", n, juegos);
        }
        else{
            printf("Case %i: Yay! Mighty Rafa persists!\n", n);
        }
    }
    return 0;
}
