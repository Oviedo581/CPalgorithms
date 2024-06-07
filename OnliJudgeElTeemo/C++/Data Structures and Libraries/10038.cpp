// 10038
// https://onlinejudge.org/external/100/10038.pdf

#include <iostream>
#include<algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int saltadores, i,n, valores, diferencia;
    bool ans;
    vector<int>V_saltadores;
    vector<int>V_diferencia;

    while (scanf("%i", &saltadores)!=EOF){
        V_saltadores.clear();
        V_diferencia.clear ();

        ans=true;

        for (i=0; i<saltadores; i++){
            scanf("%i", &valores);
            V_saltadores.push_back(valores);
        }
        for (i=0; i<V_saltadores.size()-1; i++){
            
            V_diferencia.push_back(abs(V_saltadores[i]-V_saltadores[i+1]));
            
        }

        for(i = 1; i<saltadores && ans == true; i++){

            auto interador = find(V_diferencia.begin(), V_diferencia.end(), i);

            if (interador == end(V_diferencia)){

                ans = false;
            }
        }

        if (ans==true){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
            
    }
    return 0;
}