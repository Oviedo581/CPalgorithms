// 10071
// https://onlinejudge.org/external/100/10071.pdf

#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    int tim,speed,res;
    while(scanf("%i %i",&tim,&speed) != EOF){
        res=((speed*2)*tim);
        printf("%i\n",res);
    }
    return 0;
}