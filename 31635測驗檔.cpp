#include <iostream>
using namespace std;
int main(){
    int ctp[100] , b = 100 , l = 1 ,a = 100 , c = 1, n , s , ot = 0 , et = 0 , oa = 0 , ea = 0 , cno = 0 , cne = 0 , z = 0, x = 0 ;
    for (int j = 0 ; j < n ; j++){
        ctp[j] = -1;
    }
    cout << "class has how many people?";
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cout << "please give score:" ;
        cin >> s ;
        ctp[i] = s;

        if (ctp[i] > -1) {
                if (i % 2 == 0){
                    ot = s + ot;
                    if (s <= a){
                        a = s;

                        }
                        for (int y = 0 ; y < 100 ; y++){
                            if (a == ctp[y]){
                                cno = y;
                                break;
                            }

                    }
                    if (s >= c){
                        c = s;
                    }
                        for (int y = 0 ; y < 100 ; y++){
                            if (c == ctp[y]){
                                cne = y;
                            }
                }}
                }else{
                    et = s + et;
                    if (s <= b){
                        b = s;
                    }
                        for (int y = 0 ; y < 100 ; y++){
                            if (b == ctp[y]){
                                z = y;
                            }
                    if (s >= l){
                        l = s;
                    }
                        for (int y = 0 ; y < 100 ; y++){
                            if (l == ctp[y]){
                                x = y;
                            }
                }

        }
    }}
    if (n % 2 == 0){
        oa = ot / (n/2) ;
        ea = et / (n/2) ;
    }
    else {
        oa = ot / (int(n / 2) + 1);
        ea = et / int(n / 2) ;
    }
    cout << "odd's avg is " << oa <<"\n" ;
    cout << "odd's max number is " << cne << " odd's max is " << c <<"\n" ;
    cout << "odd's min is " << cno << " odd's min is "<< a <<"\n" ;
    cout << "even's avg is " << ea <<"\n" ;
    cout << "even's max number is " << z << " even's max is "<< l <<"\n" ;
    cout << "even's min number is " << x << " even's min is " << b <<"\n" ;
}
