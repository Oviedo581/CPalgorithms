#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

bool compare(int a, int b){
  bool ans;

  if(a % 2 == 0 && b % 2 == 0)
    ans = a > b;
  else if(a % 2 == 0)
    ans = true;
  else if(b % 2 == 0)
    ans = false;
  else
    ans = a < b;
  
  return ans;
}

class Comparador{
  public:
  bool operator() (int a, int b){
    bool ans;

    if(a % 2 == 0 && b % 2 == 0)
      ans = a > b;
    else if(a % 2 == 0)
      ans = true;
    else if(b % 2 == 0)
      ans = false;
    else
      ans = a < b;
  
    return ans;
  }
};

class Otra{
};

struct Estudiante{
  string nombre;
  string codigo;
  double nota;

  Estudiante(){}

  Estudiante(string n, string c, double no){
    nombre = n;
    codigo = c;
    nota = no;
  }

  bool operator< (Estudiante &oth){
    bool ans;
    if(nombre == oth.nombre)
      ans = nota < oth.nota;
    else
      ans = nombre < oth.nombre;
    return ans;
  }
};

int main(){
  int i, p;
  vector<int> v;
  /*
  for(i = 0; i < 0; ++i){
    scanf("%d", &p);
    v.push_back(p);
  }

  for(i = 0; i < 10; ++i)
    printf("%d ", v[i]);
  printf("\n");

  sort(v.begin(), v.begin() + 6);

  for(i = 0; i < 10; ++i)
    printf("%d ", v[i]);
  printf("\n");

  //sort(v.begin(), v.end(), compare);
  sort(v.begin(), v.end(), Comparador());

  for(i = 0; i < 10; ++i)
    printf("%d ", v[i]);
  printf("\n");
  */

  Comparador cmp;
  if(cmp(3, 4))
    printf("3 es menor que 4\n");
  else
    printf("No es menor\n");

  //Otra oth;
  //if(oth())
  //  printf("3 es menor que 4\n");
  //else
  //  printf("No es menor\n");

  vector<Estudiante> vecEst;
  vecEst.push_back(Estudiante("Carlos", "32324322", 4.0));
  vecEst.push_back(Estudiante("Cristina", "34344334", 4.5));
  vecEst.push_back(Estudiante("Carlos", "11111111", 3.0));
  vecEst.push_back(Estudiante("Kaner", "4334334", 5.0));
  vecEst.push_back(Estudiante("Laura", "56556", 4.7));

  for(i = 0; i < vecEst.size(); ++i){
    cout << vecEst[i].nombre << " " << vecEst[i].codigo << " " << vecEst[i].nota << endl;
  }

  sort(vecEst.begin(), vecEst.end());

  for(i = 0; i < vecEst.size(); ++i){
    cout << vecEst[i].nombre << " " << vecEst[i].codigo << " " << vecEst[i].nota << endl;
  }
  
  return 0;
}
