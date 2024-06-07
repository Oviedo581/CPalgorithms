// 13034
// https://onlinejudge.org/external/130/13034.pdf

#include <iostream>

int main(){
    int casos,i,sets,n;
    bool ans;
    scanf("%i",&casos);
    for(i=1;i<casos+1;i++){
        ans=true;
        for(n=0;n<13;n++){
            scanf("%i",&sets);
            if (sets==0){
                ans=false;
            }
        }
        if(ans==true){
            printf("Set #%i: Yes\n",i);
        }
        else{
            printf("Set #%i: No\n",i);
        }
    }
    return 0;
}