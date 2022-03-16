#include <iostream>
using namespace std;
int main(){
  int a,sc,max,min,max2,min2,m,n,p,q;
  int c=0,z=0;
  string ne,max11,min11,max12,min12;
  cout<<"輸入班上人數:";
  cin>>a;
    int score[a];
    int score2[a];
    string name[a];
    string name2[a];
  for(int b=0;b<a;b++){
    cout<<b+1;
    cout<<"號 ";
    cout<<"姓名:";
    if((b+1)%2!=0){
      cin>>name[z];
      cout<<"分數:";
      cin>>sc;
      for(int d=0;d<z;d++){
        if(sc>max){
          max=sc;
          max11=name[z];
          p=(b+1);
        }else if(sc<=min){
          min=sc;
          min11=name[z];
          q=(b+1);
        }
      }
      score[z]=sc;
      z++;
    }else if((b+1)%2==0){
      cin>>name2[c];
      cout<<"分數2:";
      cin>>sc; 
      for(int d=0;d<c;d++){
        if(sc>max2){
          max2=sc;
          max12=name2[z];
          m=(b+1);
        }else if(sc<=min2){
          min2=sc;
          min12=name2[z];
          n=(b+1);
        }
      } 
      score2[c]=sc;
      c++;
    }
  }
  cout<<"奇數最高分:";
  cout<<p;
  cout<<"號";
  cout<<max11;
  cout<<max;
  cout<<"分\n";
  cout<<"奇數最低分:";
  cout<<q;
  cout<<"號";
  cout<<min11;
  cout<<min;
  cout<<"分\n";
  cout<<"偶數最高分:";
  cout<<m;
  cout<<"號";
  cout<<max12;
  cout<<max2;
  cout<<"分\n";
  cout<<"偶數最低分:";
  cout<<n;
  cout<<"號";
  cout<<min12;
  cout<<min2;
  cout<<"分";
}
