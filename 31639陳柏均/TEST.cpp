#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int people;
  int nts[100];
  int hse=-1,hso=-1,et=0,ot=0,lse=101,lso=101,nhe,nho,nle,nlo,ao=0,ae=0;
  cout <<"how many people?:";
  cin >>people;
  int e,o;
  e=people/2;
  o=people-e;
  for(int i=1;i<=people;i++){
    cout <<"No."<<i<<"'s score:/n";
    cin >>nts[i-1];
    if(i%2==0){
      if(hse<nts[i-1]){
        hse=nts[i-1];
        nhe=i;
        }
      if(lse>nts[i-1]){
        lse=nts[i-1];
        nle=i;
      et+=nts[i-1];
      }
    else{
      if(hso<nts[i-1]){
        hso=nts[i-1];
        nho=i;
        }
      if(lso>nts[i-1]){
        lso=nts[i-1];
        nlo=i;
      ot+=nts[i-1];
      }
    ao=ot/(float)o;
    ae=et/(float)e;
    
    }
      }
    }
  cout <<"Average of Odd:"<<ao<<"\n";
  cout <<"The highest score in odd is"<<hso<<",NO."<<nho<<"";
  cout <<"The lowest score in odd is"<<hso<<",NO."<<nho<<"";
  cout <<"Average of Even:"<<ae<<"\n";
  cout <<"The highest score in even is"<<hse<<",NO."<<nhe<<"";
  cout <<"The lowest score in even is"<<lse<<",NO."<<nle<<"";
  }
    
