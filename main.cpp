#include <iostream>
using namespace std;

int main() {
    int p, n_o_b, n_e_b, n_o_s, n_e_s;
    int total_o = 0, total_e = 0, s_o_b = -1, s_e_b = -1, s_o_s = 101, s_e_s = 101;
    float a_o, a_e;
    int odd, even;
    int n[100] = {0};
    cout << "請輸入人數:";
    cin >> p;
    even = p / 2;
    odd = p - even;
    for (int i = 0; i < p; i++) {
        cout << i + 1 << "號的分數:";
        cin >> n[i];
        if ((i+1) % 2 == 0) {
            total_e += n[i];
            if (s_e_b < n[i]) {
                s_e_b = n[i];
                n_e_b = i + 1;
            }
            if (s_e_s > n[i]) {
                s_e_s = n[i];
                n_e_s = i + 1;
            }
        } else {
            total_o += n[i];
            if (s_o_b < n[i]) {
                s_o_b = n[i];
                n_o_b = i + 1;
            }
            if (s_o_s > n[i]) {
                s_o_s = n[i];
                n_o_s = i + 1;
            }
        }
    }
    a_e = total_e / (float)even;
    a_o = total_o / (float)odd;

    cout << "\n奇數的平均:" << a_o;
    cout << "\n奇數的最高分是" << n_o_b << "號" << s_o_b << "分";
    cout << "\n奇數的最低分是" << n_o_s << "號" << s_o_s << "分";
    cout << "\n\n偶數的平均:" << a_e;
    cout << "\n偶數的最高分是" << n_e_b << "號" << s_e_b << "分";
    cout << "\n偶數的最低分是" << n_e_s << "號" << s_e_s << "分";
    }    