// 1585
// https://onlinejudge.org/external/15/1585.pdf

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int T,suma,i,r,cont;
    string cad; 
    scanf("%i",&T);
    for (i=0;i<T;i++){
        cin>>cad;
        suma=0;
        cont=0;
        for (r=0;r<cad.length();r++){
            if (cad[r]=='O'){
                cont+=1;
                suma+=cont;  
            }
            else {
                cont=0;
            }
        }
        printf("%i\n",suma);
    }
    return 0;
}

