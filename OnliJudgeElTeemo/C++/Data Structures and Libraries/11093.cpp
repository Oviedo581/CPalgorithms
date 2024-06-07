// 11093
// https://onlinejudge.org/external/110/11093.pdf
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int casos, i, estaciones, j, Gasolina, suma_1, suma_2, contador, posicion;
    bool ans;
    vector<int>G_disponible, G_necesaria;
    scanf("%i", &casos);
    for(i=1; i<casos+1; i++){
        scanf("%i", &estaciones);
        suma_1=0;
        suma_2=0;
        G_disponible.clear();
        G_necesaria.clear();
        ans=true;
        for(j=0; j<(estaciones*2); j++){
            scanf("%i", &Gasolina);
            if (G_disponible.size()<estaciones){
                G_disponible.push_back(Gasolina);
            }
            else{
                G_necesaria.push_back(Gasolina);
            }
        }
        contador=0;
        for(j=0; j<G_disponible.size(); j++){
            suma_1+=G_disponible[j];
            suma_2+=G_necesaria[j];
            contador+=G_disponible[j]-G_necesaria[j];
            if(contador>=0 && ans==true){
                posicion=j+1;
                ans=false;
            }
            else if (contador<0){
                contador=0;
                ans=true;
            }
        }
        if(suma_1<suma_2){
            printf("Case %i: Not possible\n", i);
        }
        else{
            printf("Case %i: Possible from station %i\n", i, posicion);
        }
    }
    return 0;
}