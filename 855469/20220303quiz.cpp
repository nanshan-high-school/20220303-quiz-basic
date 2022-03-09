#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int score[N]{0};
    int best_score1 = -1, worst_score1 = 101, best_num1 = 0, worst_num1 = 0, n1 = 0;
    float sum1 = 0.0, sum2 = 0.0;
    int best_score2 = -1, worst_score2 = 101, best_num2 = 0, worst_num2 = 0;
    for(int i = 0; i < N; i++){
        cin >> score[i];
        if (i%2 != 0){
            sum1 += score[i];
            n1++;
            if (score[i] > best_score1){
                best_score1 = score[i];
                best_num1 = i;
            }
            if (score[i] < worst_score1){
                worst_score1 = score[i];
                worst_num1 = i;
            }
        }else{
            sum2 += score[i];
            if (score[i] > best_score2){
                best_score2 = score[i];
                best_num2 = i;
            }
            if (score[i] < worst_score2){
                worst_score2 = score[i];
                worst_num2 = i;
            }
        }
    }
    cout << "even average: " << sum1/n1 << "\n";
    cout << "odd average: " << sum2/(N-n1) << "\n";
    cout << "even best: No." << best_num1+1 << ", score: " << best_score1 << "\n";
    cout << "even worst: No." << worst_num1+1 << ", score: " << worst_score1 << "\n";
    cout << "odd best: No." << best_num2+1 << ", score: " << best_score2 << "\n";
    cout << "odd worst: No." << worst_num2+1 << ", score: " << worst_score2 << "\n";

}
