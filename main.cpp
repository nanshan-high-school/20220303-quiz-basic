#include <iostream>
#include <stdio.h>
using  namespace std;
int main(){
int list1[2][100];
for(int i=0;i<=99;i++){list1[0][i]=0;list1[1][i]=0;}
int number,point,highest,lowest,average,highpe,lowpe;
int num1=0; //num1用來計算總學生數量
while(true){
    cout<<"enter number,enter \"-1\" to stop   ";
    cin>>number;
    if(number==-1){break;}
    cout<<"enter point   ";
    cin>>point;
    list1[0][num1]=number;
    list1[1][num1]=point;
    num1=num1+1;}
highest=-1;
lowest=101;
average=0;
highpe=0;
lowpe=0;
for(int i=0;i<=49;i++){
    average=average+list1[1][i*2];
    if(list1[1][i*2]>highest and list1[0][i*2]>0){highest=list1[1][i*2];highpe=list1[0][i*2];}
    if(list1[1][i*2]<lowest and list1[0][i*2]>0){lowest=list1[1][i*2];lowpe=list1[0][i*2];}}
cout<<"average A = "<<average/((num1+1+num1%2)/2)<<"\n";
cout<<"highest A = "<<highpe<<"  "<<highest<<"\n";
cout<<"lowest A = "<<lowpe<<"  "<<lowest<<"\n";
highest=-1;
lowest=101;
average=0;
highpe=0;
lowpe=0;
for(int i=0;i<=49;i++){
    average=average+list1[1][i*2+1];
    if(list1[1][i*2+1]>highest and list1[0][i*2+1]>0){highest=list1[1][i*2+1];highpe=list1[0][i*2+1];}
    if(list1[1][i*2+1]<lowest and list1[0][i*2+1]>0){lowest=list1[1][i*2+1];lowpe=list1[0][i*2+1];}
}
cout<<"average B = "<<average/((num1+1+num1%2)/2)<<"\n";
cout<<"highest B = "<<highpe<<"  "<<highest<<"\n";
cout<<"lowest B = "<<lowpe<<"  "<<lowest<<"\n";
}
