// 11727
// https://onlinejudge.org/external/117/11727.pdf

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int casos,i,x,y,z,mid;
    scanf("%i",&casos);
    for (i=1;i<casos+1;i++){
        scanf("%i %i %i",&x,&y,&z);
        if ((x>y && x<z) || (x<y && x>z)){
            mid=x;
        }
        else if ((y>x && y<z) || (y<x && y>z)){
            mid=y;
        }
        else{
            mid=z;
        }             
    printf("Case %i: %i\n",i,mid);
    }
    return 0;
}