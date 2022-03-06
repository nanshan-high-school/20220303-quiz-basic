#include <iostream>
using namespace std;

int main() {
  int strength;
  cout << "class size:";
  cin >> strength;
  int score = 0, sum1 = 0, sum2 = 0, average1 = 0, average2 = 0, max1 = 0, min1 = 100, minPlus1 = 0, maxPlus1 = 0, max2 = 0, min2 = 100, minPlus2 = 0, maxPlus2 = 0, a = 0, b = 0;
  a = strength / 2;
  int classScore[strength];
  for(int i = 0; i < strength; i++){
    cout << "score" << i + 1 << ":";
    cin >> score;
    classScore[i] = score;
    if(strength % 2 != 0 && i % 2 != 0){
      a += 1;
    }
    if(strength % 2 == 0){
      if(i % 2 == 0){
        sum1 += score;
        average1 = sum1 / a;
        if(score > max1){
          maxPlus1 = i + 1;
          max1 = score;
        }
        if(score < min1){
          minPlus1 = i + 1;
          min1 = score;
        }
      }else{
        sum2 += score;
        average2 = sum2 / a;
        if(score > max2){
          maxPlus2 = i + 1;
          max2 = score;
        }
        if(score < min2){
          minPlus2 = i + 1;
          min2 = score;
        }
      }
    }
    if(strength % 2 != 0){
      if(i % 2 == 0){
        sum1 += score;
        average1 = sum1 / a;
        if(score > max1){
          maxPlus1 = i + 1;
          max1 = score;
        }
        if(score < min1){
          minPlus1 = i + 1;
          min1 = score;
        }
      }else{
        sum2 += score;
        average2 = sum2 / a;
        if(score > max2){
          maxPlus2 = i + 1;
          max2 = score;
        }
        if(score < min2){
          minPlus2 = i + 1;
          min2 = score;
        }
      }
    }
  }
  cout << "averageODD = " << average1 << " " << "averageEVEN = " << average2;
  cout << "\n" << "ODD:" << "score" << maxPlus1 << " highest = " << max1;
  cout << "   score" << minPlus1 << " lowest = " << min1;
  cout << "\n" << "EVEN:" << "score" << maxPlus2 << " highest = " << max2;
  cout << "   score" << minPlus2 << " lowest = " << min2;
}