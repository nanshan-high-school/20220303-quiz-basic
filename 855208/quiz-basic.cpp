#include <iostream>
using namespace std;

int main() {
    int studentCount;
    cin >> studentCount;

    int* grades = new int[studentCount];
    for (int i = 0; i < studentCount; i++) {
        cin >> grades[i];
        if (grades[i] > 100 || grades[i] < 0) {
            cout << "\nGrade out of range: " << grades[i];
            return 0;
        }
    }    

    for (int i = 0; i < 2; i++) {
        int total = 0;
        int max = -1;
        int min = 101;
        int maxNumber = 0;
        int minNumber = 0;

        int j = i;
        for (; j < studentCount; j += 2) {
            total += grades[j];

            if(grades[j] > max) {
                max = grades[j];
                maxNumber = j + 1;
            }
            if(grades[j] < min) {
                min = grades[j];
                minNumber = j + 1;
            }
        }

        if (i) {
            cout << "\n----Even----\n";
        } else {
            cout << "\n----Odd----\n";
        }
        j -= 2;

        cout << "average:" << ((float)total / j) << "\n";
        cout << maxNumber << " is the highest: " << max  << "\n";
        cout << minNumber << " is the lowest: " << min << "\n";
    }
}