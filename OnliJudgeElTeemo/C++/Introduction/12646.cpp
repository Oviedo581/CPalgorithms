// 12646
// https://onlinejudge.org/external/126/12646.pdf

#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    int a, b, c;
    while (scanf("%i %i %i", &a, &b, &c)!=EOF){
    if (c != b && c != a){
        printf("C\n");
    }
    else if (a != c && a != b){
        printf("A\n");
    }
    else if (b != c && b != a){
        printf("B\n");
    }
    else {
        printf("*\n");
    }
    }
    return 0;
}