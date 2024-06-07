// 12403
// https://onlinejudge.org/external/124/12403.pdf

#include<string>
#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    string cadena,numero;
    int casos,i, plata, contador = 0;
    scanf("%i\n", &casos);
    while(casos--){
        getline(cin,cadena);
        numero = "";
        if(cadena[0] == 'd'){   
            for(i = 7; i<cadena.length(); i++){
                numero+=cadena[i];
            }
            plata = stoi(numero);
            contador+=plata;
        }
        else{
            printf("%i\n", contador);
        }
    }
    return 0;
}