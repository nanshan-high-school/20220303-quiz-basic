#include<iostream>
using namespace std;
//當天程式忘記儲存所以在家裡重新寫一遍 
int main(){
	int N=0; cout << "people:"; cin >> N;
	int score[100]={0};
	for(int i=0; i<N; i++){
		cout << i+1 << ":"; cin >> score[i];	
	}
	
	float odd_avg=0, even_avg=0;
	int odd_maxNum=0, even_maxNum=1;
	int odd_minNum=0, even_minNum=1;
	for(int i=0; i<N; i++){
		odd_avg += (i+1)%2==1?score[i]:0;
		even_avg += (i+1)%2==0?score[i]:0;
		odd_maxNum = ((i+1)%2==1)&&(score[odd_maxNum]<score[i])?i:odd_maxNum;
		even_maxNum = ((i+1)%2==0)&&(score[even_maxNum]<score[i])?i:even_maxNum;
		odd_minNum = ((i+1)%2==1)&&(score[odd_minNum]>score[i])?i:odd_minNum;
		even_minNum = ((i+1)%2==0)&&(score[even_minNum]>score[i])?i:even_minNum;
	}
	odd_avg /= N%2==0?N/2:(N+1)/2;
	even_avg /= N%2==0?N/2:(N-1)/2;
	
	cout << "odd max: " << score[odd_maxNum] << ", No. " << odd_maxNum+1 << endl;
	cout << "odd min: " << score[odd_minNum] << ", No. " << odd_minNum+1 << endl;
	cout << "odd avg: " << odd_avg << endl;
	cout << "even max: " << score[even_maxNum] << ", No. " << even_maxNum+1 << endl;
	cout << "even min: " << score[even_minNum] << ", No. " << even_minNum+1 << endl;
	cout << "even avg: " << even_avg << endl;
}
