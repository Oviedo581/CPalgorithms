// 11172
// https://onlinejudge.org/external/111/11172.pdf

#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int casos,num1,num2;
    scanf("%i",&casos);
    while(casos--){
        scanf("%i %i",&num1,&num2);
        if(num1<num2){
            printf("<\n");
        }
        else if(num1>num2){
            printf(">\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;
}