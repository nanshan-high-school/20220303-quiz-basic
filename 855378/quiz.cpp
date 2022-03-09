#include <iostream>
using namespace std;

int main(){
    int sdnum = 0,grade[100] = {0},odd = 0,even = 0,minn = 101,minp = 0,maxn = -1,maxp = 0,oddnum = 0;
    cout << "Student number:";
    cin >> sdnum;
    if (sdnum % 2 == 0) {
        oddnum = sdnum/2;
    }else {
        oddnum = (sdnum + 1)/2;
    }
    for (int i = 0;i < sdnum;i++) {
        cout << i + 1 << ":";
        cin >> grade[i];
    }
    for (int i = 0;i < sdnum;i ++) {
        odd += grade[2*i];
    }
    cout << "odd average:" << (odd/oddnum) << "\n";
    for (int i = 0;i < (sdnum - oddnum);i ++) {
        even += grade[(2*i)+1];
    }
    cout << "even average:" << (even/(sdnum - oddnum)) << "\n";
    for (int i = 0;i < oddnum;i++) {
        if (grade[2*i] < minn) {
            minn = grade[2*i];
            minp = (2*i)+1;
        }
        if (grade[2*i] > maxn) {
            maxn = grade[2*i];
            maxp = (2*i)+1;
        }
    }
    cout << "odd min:" << minp << ":" << minn << "\n";
    cout << "odd max:" << maxp << ":" << maxn << "\n";
    maxp = 0,minn = 100,minp = 0,maxn = -1;
    for (int i = 0;i < (sdnum-oddnum);i++) {
        if (grade[(2*i) + 1] < minn) {
            minn = grade[(2*i) + 1];
            minp = 2*(i+1);
        }
        if (grade[(2*i) + 1] > maxn) {
            maxn = grade[(2*i) + 1];
            maxp = 2*(i+1);
        }
    }
    cout << "even min:" << minp << ":" << minn << "\n";
    cout << "even max:" << maxp << ":" << maxn << "\n";
}