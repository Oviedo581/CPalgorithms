// 11799
// https://onlinejudge.org/external/117/11799.pdf

#include <algorithm>
#include <vector>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    
    int casos,i,mayor,n,m,vel;
    scanf("%i",&casos);
    
    for (i=1;i<casos+1;i++){
        scanf("%i",&n);
        mayor=0;
        for (m=0;m<n;m++){
            scanf("%i",&vel);
            if (vel>mayor){
                mayor=vel;
            }
        }
        printf("Case %i: %i\n",i,mayor);
    }
    return 0;
}