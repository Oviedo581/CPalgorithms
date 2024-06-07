// 10055
// https://onlinejudge.org/external/100/10055.pdf

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int aliado,enemigo;
    while(scanf("%lld %lld", &aliado, &enemigo) != EOF){
        printf("%lld\n",abs(enemigo-aliado));
    }
    return 0;
}
