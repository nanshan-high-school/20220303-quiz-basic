#include <iostream>
using namespace std;

int main() {

    int totalPeople;
    cout << "Please input how many people:";
    cin >> totalPeople;

    int everyScore[100] = {0};
    for (int i = 0; i < totalPeople; i++) {
        cout << "Please input number" << i + 1 << "'s score:";
        cin >> everyScore[i];
    }

    int oddMaxScore = -1, oddMinScore = 101, oddTotalScore = 0, oddMaxPerson, oddMinPerson;
    for (int i = 0; i < totalPeople; i+=2) {
        if (everyScore[i] > oddMaxScore) {
            oddMaxScore = everyScore[i];
            oddMaxPerson = i + 1;
        }
        if (everyScore[i] < oddMinScore) {
            oddMinScore = everyScore[i];
            oddMinPerson = i + 1;
        }

        oddTotalScore += everyScore[i];
    }

    int evenMaxScore = -1, evenMinScore = 101, evenTotalScore = 0,evenMaxPerson, evenMinPerson;
    for (int i = 1; i < totalPeople; i+=2) {
        if (everyScore[i] > evenMaxScore) {
            evenMaxScore = everyScore[i];
            evenMaxPerson = i + 1;
        }
        if (everyScore[i] < evenMinScore) {
            evenMinScore = everyScore[i];
            evenMinPerson = i + 1;
        }

        evenTotalScore += everyScore[i];
    }

    int oddPerson;
    if (totalPeople % 2) {
        oddPerson = (totalPeople / 2) + 1;
    } else {
        oddPerson = (totalPeople / 2);
    }

    cout << "The average in the whole class is:" << (oddTotalScore + evenTotalScore) / totalPeople << "\n";
    cout << "The odd group's average is:" << oddTotalScore / oddPerson << " ; number" << oddMaxPerson << " is the highest score in this group with " << oddMaxScore << " ; number" << oddMinPerson << " is the lowest score in this group with" << oddMinScore << "\n";
    cout << "The even group's average is:" << evenTotalScore / (totalPeople / 2) << " ; number" << evenMaxPerson << " is the highest score in this group with " << evenMaxScore << " ; number" << evenMinPerson << " is the lowest score in this group with" << evenMinScore << "\n";

}
