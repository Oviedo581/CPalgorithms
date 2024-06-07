// 11764
// https://onlinejudge.org/external/117/11764.pdf

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int casos, paredes, i, j, altura, abajo, arriba;
    vector<int>v_altura;
    scanf("%i", &casos);
    for(i=1; i<casos+1; i++){
        scanf("%i", &paredes);
        v_altura.clear();
        abajo=0;
        arriba=0;
        for(j=0; j<paredes; j++){
            scanf("%i", &altura);
            v_altura.push_back(altura);
        }
        for (j=0; j<paredes-1; j++){
            if(v_altura[j]>v_altura[j+1]){
                abajo+=1;
            }
            else if(v_altura[j]<v_altura[j+1]){
                arriba+=1;
            }
        }
        printf("Case %i: %i %i\n", i, arriba, abajo);
    }
    return 0;
}