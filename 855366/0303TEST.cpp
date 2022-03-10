#include <iostream>
using namespace std;

int main(){
	int a, even, odd, score, tmp, i, j, sum = 0, evensco = 0, oddsco = 0, evenmax = -1,oddmax = -1,evenlow = 101,oddlow = 101, evenmaxs,evenlows,oddmaxs,oddlows;
	
	while (true) {
		cin >> a;
		if (a<100) {
			int arr[a];
			for (i=0;i<a;i++) {
				cin >> score;
				if (score>=0 && score<=100) {
					arr[i]=score;
					sum += score;
					if (i%2==0){
						if (score > evenmax){
							evenmax = score;
							evenmaxs = i+1;
						}
						if (score < evenlow){
							evenlow = score;
							evenlows = i+1;
						}
						oddsco += score;
					} else {
						if (score > oddmax){
							oddmax = score;
							oddmaxs = i+1;
						}
						if (score < oddlow){
							oddlow = score;
							oddlows = i+1;
						}
						evensco += score;
					}
				} else {
					cout << "分數必須介於0到100";
				}
			}
			if (a%2==0){
				cout << oddsco / (a/2) << "\n";
				cout << evenmaxs << "," << evenmax << "\n";
				cout << evenlows << "," << evenlow << "\n";
				cout << evensco / (a/2) << "\n";
				cout << oddmaxs << "," << oddmax << "\n";
				cout << oddlows << "," << oddlow << "\n";
			} else {
				cout << oddsco / ((a-1)/2) << "\n";
				cout << evenmaxs << "," << evenmax << "\n";
				cout << evenlows << "," << evenlow << "\n";
				cout << evensco / ((a+1)/2) << "\n";
				cout << oddmaxs << "," << oddmax << "\n";
				cout << oddlows << "," << oddlow << "\n";
			}
		} else {
			cout << "人數上限為100人";
		}
	}
}
