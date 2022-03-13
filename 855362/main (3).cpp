#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std; 
int main() {
  string gs , ans ;
  int a = 0 , b = 0 , r = 0;
  bool jack[5]{false};
  string v[3]{"apple","power","shell"};
  srand(time(0));
  r = 0+random()%3;
    gs = v[r];
  while(true){  
    int a = 0 , b = 0 ,c = 0 ;
    cin >> ans ;
    for(int i = 0 ;i < 5 ; i++){
      if(gs[i]==ans[i]){
        a++;
        jack[i] = true;
      } 
    }
    for(int i = 0 ;i < 5 ; i++){
      for(int j = 0 ;j < 5 ; j++){
        if(jack[i]!=true &&jack[j]!=true && gs[i]==ans[j]){
          b++;
          continue;
        }
      }
    }
    if(a==5){
      cout<<"correct";
    }else{
      cout<<"a:"<<a<<"  b:"<<b<<"\n";
    }
  }
}