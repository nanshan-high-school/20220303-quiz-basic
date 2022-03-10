#include <iostream>
using namespace std;

int main(){

    int stu, esum = 0, osum = 0, eavg, oavg, odd = 0, even = 0;

    int omax = -1, omin = 101, emax = -1, emin = 101;
    int omn, oin, emn, ein;

    cin >> stu;

    int num[stu];
    int s[stu];

    for(int i = 0; i < stu; i++){

        cin >> num[i];
        cin >> s[i];

        if(num[i] % 2 == 0){

            esum += s[i];
            even += 1;

        }else{

            osum += s[i];
            odd += 1;

        }


    }

    for(int i = 0; i < stu; i++){

        if(num[i] % 2 == 0){

            if(s[i] > emax){
                emax = s[i];
                emn = num[i];
            }

            if(s[i] < emin){

                emin = s[i];
                ein = num[i];

            }

        }else{

            if(s[i] > omax){

                omax = s[i];
                omn = num[i];
            }

            if(s[i] < omin){

                omin = s[i];
                oin = num[i];

            }

        }

    }

    if(odd == 0){

        odd = 1;

    }

    if(even == 0){

        even = 1;

    }

    oavg = osum / odd;
    eavg = esum / even;

    cout << "odd avg = " << int(oavg) << "  even avg = " << int(eavg) << "\n";
    cout << "odd max = " << omn << "," << omax << "\n";
    cout << "odd min= " << oin << "," << omin << "\n";
    cout << "even max = " << emn << "," << emax << "\n";
    cout << "even min= " << ein << "," << emin << "\n";


}
