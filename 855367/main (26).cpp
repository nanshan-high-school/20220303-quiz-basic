#include <iostream>
using namespace std;
int main(){
    int grade[100] = {0};
    int odd[100] = {0};
    int even[100] = {0};
    int s;
    int sumo = 0;
    int sume = 0;
    int a = 0;
    int b = 0;
    int aveo;
    int avee;
    int maxso;
    int maxgo = -1;
    int minso;
    int mingo = 101;
    int maxse;
    int maxge = -1;
    int minse;
    int minge = 101;
    cout << "student number:";
    cin >> s;
    for(int i = 1; i <= s; i++){
        cout << "grade:";
        cin >> grade[i];
    }
    for(int i = 1;i <= s; i++){
        if(i%2 == 1){
            odd[i] = grade[i];
            sumo += odd[i];
            a += 1;
        }else if(i%2 == 0){
            even[i] = grade[i];
            sume += even[i];
            b += 1;
        }
    }
    aveo = sumo/a;
    avee = sume/b;
    //cout << sumo <<"\n";
    //cout << sume <<"\n";
    cout << "奇數平均" << aveo <<"\n";
    cout << "偶數平均" << avee <<"\n";
    for(int i = 1; i <= s; i+=2){
      if (grade[i] > maxgo){
          maxgo = grade[i];
          maxso = i;
      } 
      if (grade [i] < mingo){
          mingo = grade[i];
          minso = i;
      }
    }
    for(int j = 2; j <= s; j+=2){
      if (grade[j] > maxge){
            maxge = grade[j];
            maxse = j;
      }
      if (grade[j] < minge){
            minge = grade[j];
            minse = j;
        }
    }
    cout << "奇數最大(分數):" << maxgo << ",奇數最大(號碼):" << maxso <<"\n";
    cout << "奇數最小(分數):" << mingo << ",奇數最小(號碼):" << minso <<"\n";
    cout << "偶數最大(分數):" << maxge << ",偶數最大(號碼):" << maxse <<"\n";
    cout << "偶數最小(分數):" << minge << ",偶數最小(號碼):" << minse;
}