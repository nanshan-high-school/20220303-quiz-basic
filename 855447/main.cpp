#include <iostream>
using namespace std;
int main() {
  int stu, oB, oS, eB, eS, en, on, oBi, oSi,eSi, eBi;
  float ototal, etotal;
  oS=101;
  eS=101;
  oB=-1;
  eB=-1;
  ototal=0.0;
  etotal=0.0;
  en=0;
  on=0;
  cin >> stu;
  int q[stu];
  for (int i=0;i<stu;i++){
    cin >> q[i];    
    if ((i+1) % 2==0){
      etotal+=q[i];
      en++;
      if (q[i]> eB){
        eB = q[i];
        eBi = i+1;
        if(q[i]< eS){
          eS = q[i];
          eSi = i+1; 
        }      
      }
    }else {
      ototal+=q[i];
      on++;
      if (q[i]> oB){
        oB = q[i];
        oBi = i+1;
        if(q[i]< oS){
        oS = q[i];
        oSi = i+1; 
        }
      }
    }
  }
  float Eaverage, Oaverage;
  Eaverage=etotal/en;
  Oaverage=ototal/on;
  cout << "奇數組平均:" <<Oaverage << "\n";
  cout << "偶數組平均:" <<Eaverage << "\n";
  cout << "奇數組最高:" << oBi << "號" << oB << "分"<< "\n";
  cout << "奇數組最低:" << oSi << "號" << oS << "分"<< "\n";
  cout << "偶數組最高:" << eBi << "號" << eB << "分"<< "\n";
  cout << "偶數組最低:" << eSi << "號" << eS << "分"<< "\n";
}