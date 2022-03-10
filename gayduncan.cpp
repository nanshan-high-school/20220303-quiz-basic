#include <iostream>
using namespace std;

int main() {
	int all = 0 , total1 = 0 , total2 = 0 , highest1 = -1 , lowest1 = 101 , highest2 = -1 , lowest2 = 101 ,lowestnum1 = 0 , highestnum1 = 0 , lowestnum2 = 0 , highestnum2 = 0;
	cin >> all;
	if(all > 100){
		cout <<"ughhhh too big"; 
		return 0;
	}
	int score[all] , no[all];
	for(int i = 0; i < all; i++){
		cin >> score[i];
		
		if(score[i] > 100 || score[i] < 0){
			cout << "hmm weirdo";
			return 0;
		}
	} 	
	for(int i = 0; i < all; i++){
		if(i % 2 == 0){
			total2 += score[i];
			no[i] = i;
			if(highest1 < score[i]){
				highest1 = score[i];
				highestnum1 = i;
			}	
			if(lowest1 > score[i]){
				lowest1 = score[i];
				lowestnum1 = i;
		 }
			
		}else{
			total1 += score[i];
			no[i] = i;
			if(highest2 < score[i]){
				highest2 = score[i];
				highestnum2 = i;
			}	
			if(lowest2 > score[i]){
				lowest2 = score[i];
				lowestnum2 = i;
			}
		}
	}
	int all1 = 0 , all2 = 0;
	if(all % 2 != 0){
		all1 = all / 2 + 1;
		all2 = all / 2;
	}else{
		all1 = all / 2;
		all2 = all / 2;
	}
	cout << "odd avg: "<< total1 / all2 << endl ;
	cout << "even avg: " << total2 / all1 << endl;
	cout <<"lowest even no :"<< lowestnum1 <<"even lowest : "<< lowest1 <<"highest even no :"<< highestnum1 <<"even highgest : "<< highest1<<endl;
	cout <<"lowest odd no:"<< lowestnum2 <<"odd lowest : "<< lowest2 <<"highest odd no :"<< highestnum2 <<"odd highgest : "<< highest2<<endl;
}
